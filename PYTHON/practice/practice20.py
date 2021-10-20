#kiem tra số la mã
regex_pattern = r""	# Do not delete 'r'.
regex_pattern =r'^M{,3}(C(D|M)|D?C{,3})(X(L|C)|L?X{,3})(I(X|V)|(X|V)?I{,3})$'
import re
print(str(bool(re.match(regex_pattern, input()))))