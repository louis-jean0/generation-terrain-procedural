import random
from functools import lru_cache
from typing import Union, Iterable, List, Optional
import math
import copy

class Vector2D:
    """A two-dimensional vector with Cartesian coordinates."""

    def __init__(self, x: Union[float, int] = 0.0, y: float = 0.0):
        self.x = float(x)
        self.y = float(y)
        self._norm = None  # Cached norm for efficiency

    def __str__(self):
        """Human-readable string representation of the vector."""
        return f'{self.x}i + {self.y}j'

    def __repr__(self):
        """Unambiguous string representation of the vector."""
        return f'Vector2D({self.x}, {self.y})'

    def dot(self, other: 'Vector2D') -> float:
        """Dot product of two vectors."""
        return self.x * other.x + self.y * other.y

    __matmul__ = dot  # Enables a @ b for dot product

    def __sub__(self, other: 'Vector2D') -> 'Vector2D':
        """Vector subtraction."""
        return Vector2D(self.x - other.x, self.y - other.y)

    def __isub__(self, other: 'Vector2D') -> 'Vector2D':
        """In-place vector subtraction."""
        self.x -= other.x
        self.y -= other.y
        self._norm = None  # Invalidate cached norm
        return self

    def __add__(self, other: 'Vector2D') -> 'Vector2D':
        """Vector addition."""
        return Vector2D(self.x + other.x, self.y + other.y)

    def __iadd__(self, other: 'Vector2D') -> 'Vector2D':
        """In-place vector addition."""
        self.x += other.x
        self.y += other.y
        self._norm = None  # Invalidate cached norm
        return self

    def __mul__(self, scalar: Union[float, int]) -> 'Vector2D':
        """Multiplication of vector by a scalar."""
        return Vector2D(self.x * scalar, self.y * scalar)

    def __imul__(self, scalar: Union[float, int]) -> 'Vector2D':
        """In-place multiplication of vector by a scalar."""
        self.x *= scalar
        self.y *= scalar
        self._norm = None  # Invalidate cached norm
        return self

    def __rmul__(self, scalar: Union[float, int]) -> 'Vector2D':
        """Reflected multiplication so scalar * vector also works."""
        return self.__mul__(scalar)

    def __neg__(self) -> 'Vector2D':
        """Negation of the vector."""
        return Vector2D(-self.x, -self.y)

    def __truediv__(self, scalar: Union[float, int]) -> 'Vector2D':
        """Division of vector by a scalar."""
        return Vector2D(self.x / scalar, self.y / scalar)

    def __mod__(self, scalar: Union[float, int]) -> 'Vector2D':
        """Modulus operation on each component."""
        return Vector2D(self.x % scalar, self.y % scalar)


    # @property
    def norm2(self) -> float:
        return self.x ** 2 + self.y ** 2

    # @property
    def norm(self) -> float:
        """Lazily evaluated norm (magnitude) of the vector with caching."""
        if self._norm is None:
            self._norm = math.sqrt(self.x ** 2 + self.y ** 2)
        return self._norm

    def __abs__(self):
        """Absolute value (magnitude) of the vector."""
        return self.norm()

    def normalize(self) -> 'Vector2D':
        """Normalize the vector in place."""
        norm = self.norm()
        if norm == 0:
            return self
        self.x /= norm
        self.y /= norm
        self._norm = 1.0
        return self

    def normalized(self) -> 'Vector2D':
        """Return a new normalized vector without modifying the original."""
        norm = self.norm()
        return Vector2D(self.x / norm, self.y / norm) if norm != 0 else Vector2D(0.0, 0.0)

    def distance_to(self, other: 'Vector2D') -> float:
        """Euclidean distance to another vector."""
        dx = self.x - other.x
        dy = self.y - other.y
        return math.sqrt(dx * dx + dy * dy)

    def rotate(self, radians: float) -> 'Vector2D':
        """Rotate the vector by a specified angle in radians."""
        cos_theta = math.cos(radians)
        sin_theta = math.sin(radians)
        new_x = cos_theta * self.x - sin_theta * self.y
        new_y = sin_theta * self.x + cos_theta * self.y
        self.x, self.y = new_x, new_y
        self._norm = None  # Invalidate cached norm
        return self

    def as_array(self) -> list:
        """Return the vector components as a list."""
        return [self.x, self.y]

    def copy(self) -> 'Vector2D':
        """Return a shallow copy of the vector."""
        return Vector2D(self.x, self.y)

    def to_polar(self) -> 'Vector2D':
        """Return the vector's components in polar coordinates."""
        return Vector2D(math.atan2(self.y, self.x), self.__abs__())

    def to_cartesian(self) -> 'Vector2D':
        return Vector2D(self.y * math.cos(self.x), self.y * math.sin(self.x))
    @staticmethod
    def from_polar(vec: 'Vector2D') -> 'Vector2D':
        return vec.to_cartesian()

    def yx(self) -> 'Vector2D':
        return Vector2D(self.y, self.x)

def randomVec2():
    return Vector2D(random.random() * 2.0 - 1.0, random.random() * 2.0 - 1.0)




#
# class Vector2D:
#     """A two-dimensional vector with Cartesian coordinates."""
#
#     def __init__(self, x: Union[float, Iterable] = None, y: float = None):
#         if y is None:
#             if x is None:
#                 x = 0
#                 y = 0
#             elif isinstance(x, Iterable):
#                 y = x[1]
#                 x = x[0]
#         self.x, self.y = x, y
#
#     def __str__(self):
#         """Human-readable string representation of the vector."""
#         return '{:g}i + {:g}j'.format(self.x, self.y)
#
#     def __repr__(self):
#         """Unambiguous string representation of the vector."""
#         return repr((self.x, self.y))
#
#     def dot(self, other):
#         """The scalar (dot) product of self and other. Both must be vectors."""
#
#         if not isinstance(other, Vector2D):
#             raise TypeError('Can only take dot product of two Vector2D objects')
#         return self.x * other.x + self.y * other.y
#
#     # Alias the __matmul__ method to dot so we can use a @ b as well as a.dot(b).
#     __matmul__ = dot
#
#     def alignedWith(self, vecA: 'Vector2D', vecB: 'Vector2D', tol: float = 0.01) -> bool:
#         AB = (vecB - vecA).normalize()
#         AC = (self - vecA).normalize()
#         return AB.dot(AC) > 1 - tol
#
#     def __sub__(self, other):
#         """Vector subtraction."""
#         return Vector2D(self.x - other.x, self.y - other.y)
#
#     def __isub__(self, other):
#         self.x -= other.x
#         self.y -= other.y
#         return self
#
#     def __add__(self, other):
#         """Vector addition."""
#         return Vector2D(self.x + other.x, self.y + other.y)
#
#     def __iadd__(self, other):
#         self.x += other.x
#         self.y += other.y
#         return self
#
#     def __mul__(self, scalar):
#         """Multiplication of a vector by a scalar."""
#
#         if isinstance(scalar, int) or isinstance(scalar, float):
#             return Vector2D(self.x * scalar, self.y * scalar)
#         raise NotImplementedError('Can only multiply Vector2D by a scalar')
#
#     def __imul__(self, scalar):
#         """Multiplication of a vector by a scalar."""
#
#         if isinstance(scalar, int) or isinstance(scalar, float):
#             self.x *= scalar
#             self.y *= scalar
#             return self
#         raise NotImplementedError('Can only multiply Vector2D by a scalar')
#
#     def __rmul__(self, scalar):
#         """Reflected multiplication so vector * scalar also works."""
#         return self.__mul__(scalar)
#
#     def __neg__(self):
#         """Negation of the vector (invert through origin.)"""
#         return Vector2D(-self.x, -self.y)
#
#     def __truediv__(self, scalar):
#         """True division of the vector by a scalar."""
#         return Vector2D(self.x / scalar, self.y / scalar)
#
#     def __mod__(self, scalar):
#         """One way to implement modulus operation: for each component."""
#         return Vector2D(self.x % scalar, self.y % scalar)
#
#     def norm2(self) -> float:
#         return self.x ** 2 + self.y ** 2
#
#     def __abs__(self):
#         """Absolute value (magnitude) of the vector."""
#         return math.sqrt(self.norm2())
#
#     def norm(self):
#         return math.sqrt(self.norm2())
#
#     def normalize(self):
#         if self.norm() == 0:
#             return self
#         return self / self.norm()
#
#     def normalized(self):
#         a = Vector2D(self.x, self.y)
#         return a.normalize()
#
#     def distance_to(self, other):
#         """The distance between vectors self and other."""
#         return abs(self - other)
#
#     def to_polar(self) -> 'Vector2D':
#         """Return the vector's components in polar coordinates."""
#         return Vector2D(math.atan2(self.y, self.x), self.__abs__())
#
#     def to_cartesian(self) -> 'Vector2D':
#         return Vector2D(self.y * math.cos(self.x), self.y * math.sin(self.x))
#
#     def copy(self):
#         return copy.deepcopy(self)
#
#     def asarray(self) -> List[float]:
#         return [self.x, self.y]
#
#     def rotate(self, radians: float):
#         newX = math.cos(radians) * self.x - math.sin(radians) * self.y
#         newY = math.sin(radians) * self.x + math.cos(radians) * self.y
#         self.x = newX
#         self.y = newY
#         return self
#
#     @staticmethod
#     def from_polar(vec: 'Vector2D') -> 'Vector2D':
#         return vec.to_cartesian()
#
#     def yx(self) -> 'Vector2D':
#         return Vector2D(self.y, self.x)
#
# def randomVec2():
#     return Vector2D(random.random() * 2.0 - 1.0, random.random() * 2.0 - 1.0)
#
#
#
#
class Vector3D:
    """A 3-dimensional vector with Cartesian coordinates."""

    def __init__(self, x: Union[float, Iterable] = None, y: float = None, z: float = None):
        if y is None and z is None:
            if x is None:
                x = 0
                y = 0
                z = 0
            elif isinstance(x, Iterable):
                x = x[0]
                y = x[1]
                z = x[2]
        self.x, self.y, self.z = x, y, z

    def __str__(self):
        """Human-readable string representation of the vector."""
        return f"[{self.x}, {self.y}, {self.z}]"

    def __repr__(self):
        """Unambiguous string representation of the vector."""
        return repr((self.x, self.y, self.z))

    def dot(self, other):
        """The scalar (dot) product of self and other. Both must be vectors."""

        if not isinstance(other, Vector2D):
            raise TypeError('Can only take dot product of two Vector2D objects')
        return self.x * other.x + self.y * other.y + self.z * other.z

    # Alias the __matmul__ method to dot so we can use a @ b as well as a.dot(b).
    __matmul__ = dot

    def alignedWith(self, vecA: 'Vector3D', vecB: 'Vector3D', tol: float = 0.01) -> bool:
        AB = (vecB - vecA).normalize()
        AC = (self - vecA).normalize()
        return AB.dot(AC) > 1 - tol

    def __sub__(self, other):
        """Vector subtraction."""
        return Vector3D(self.x - other.x, self.y - other.y, self.z - other.z)

    def __isub__(self, other):
        self.x -= other.x
        self.y -= other.y
        self.z -= other.z
        return self

    def __add__(self, other):
        """Vector addition."""
        return Vector3D(self.x + other.x, self.y + other.y, self.z + other.z)

    def __iadd__(self, other):
        self.x += other.x
        self.y += other.y
        self.z += other.z
        return self

    def __mul__(self, scalar):
        """Multiplication of a vector by a scalar."""

        if isinstance(scalar, int) or isinstance(scalar, float):
            return Vector3D(self.x * scalar, self.y * scalar, self.z * scalar)
        raise NotImplementedError('Can only multiply Vector3D by a scalar')

    def __imul__(self, scalar):
        """Multiplication of a vector by a scalar."""

        if isinstance(scalar, int) or isinstance(scalar, float):
            self.x *= scalar
            self.y *= scalar
            self.z *= scalar
            return self
        raise NotImplementedError('Can only multiply Vector3D by a scalar')

    def __rmul__(self, scalar):
        """Reflected multiplication so vector * scalar also works."""
        return self.__mul__(scalar)

    def __neg__(self):
        """Negation of the vector (invert through origin.)"""
        return Vector3D(-self.x, -self.y, -self.z)

    def __truediv__(self, scalar):
        """True division of the vector by a scalar."""
        return Vector3D(self.x / scalar, self.y / scalar, self.z / scalar)

    def __mod__(self, scalar):
        """One way to implement modulus operation: for each component."""
        return Vector3D(self.x % scalar, self.y % scalar, self.z % scalar)

    def norm2(self) -> float:
        return self.x ** 2 + self.y ** 2 + self.z ** 2

    def __abs__(self):
        """Absolute value (magnitude) of the vector."""
        return math.sqrt(self.norm2())

    def norm(self):
        return math.sqrt(self.norm2())

    def normalize(self):
        if self.norm() == 0:
            return self
        return self / self.norm()

    def normalized(self):
        a = Vector3D(self.x, self.y, self.z)
        return a.normalize()

    def distance_to(self, other):
        """The distance between vectors self and other."""
        return abs(self - other)

    def to_polar(self):
        """Return the vector's components in polar coordinates."""
        raise NotImplementedError("Cannot get polar coordinates from a 3D-vector for now")
        # return self.__abs__(), math.atan2(self.y, self.x)

    def copy(self):
        return copy.deepcopy(self)

    def asarray(self) -> List[float]:
        return [self.x, self.y, self.z]

    def rotate(self, radians: float):
        raise NotImplementedError("Cannot apply rotation on a 3D vector for now")
        # newX = math.cos(radians) * self.x - math.sin(radians) * self.y
        # newY = math.sin(radians) * self.x + math.cos(radians) * self.y
        # self.x = newX
        # self.y = newY
        # return self


def randomVec3():
    return Vector3D(random.random(), random.random(), random.random())


def line_intersection(P11: Vector2D, P12: Vector2D, P21: Vector2D, P22: Vector2D, epsilon: float = 0.0) -> Optional[Vector2D]:
    divisor = (P11.x - P12.x) * (P21.y - P22.y) - (P11.y - P12.y) * (P21.x - P22.x)
    if divisor == 0:
        return None
    t = ((P11.x - P21.x) * (P21.y - P22.y) - (P11.y - P21.y) * (P21.x - P22.x)) / divisor
    u = ((P11.x - P21.x) * (P11.y - P12.y) - (P11.y - P21.y) * (P11.x - P12.x)) / divisor

    # check if line actually intersect
    if (epsilon != 0.0 and 0 + epsilon <= t <= 1 - epsilon and 0 + epsilon <= u <= 1 - epsilon) or (
            epsilon == 0.0 and 0 <= t <= 1 and 0 <= u <= 1):
        return P11 + t * (P12 - P11)  # [P11[0] + t * (P12[0] - P11[0]), P11[1] + t * (P12[1] - P11[1])]
    else:
        return None


def closestPointToLine(point: Vector2D, lineA: Vector2D, lineB: Vector2D, limitedToSegment: bool = True) -> Vector2D:
    a = (point - lineA)
    b = (lineB - lineA)
    if b.dot(b) == 0:
        return lineA
    t = ((a.dot(b)) / (b.dot(b)))
    return (t if not limitedToSegment else min(1, max(0, t))) * b + lineA

def distanceToLine(point: Vector2D, lineA: Vector2D, lineB: Vector2D, limitedToSegment: bool = True) -> float:
    return (point - closestPointToLine(point, lineA, lineB, limitedToSegment)).norm()

def distance2ToLine(point: Vector2D, lineA: Vector2D, lineB: Vector2D, limitedToSegment: bool = True) -> float:
    return (point - closestPointToLine(point, lineA, lineB, limitedToSegment)).norm2()