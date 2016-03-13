# sklearn example
from sklearn import datasets
from sklearn import svm

iris = datasets.load_iris()
digits = datasets.load_digits()

print digits.data

print digits.target

clf = svm.SVC(gamma = 0.001, C= 100.)

print clf.fit(digits.data[:-1], digits.target[:-1])
print clf.predict(digits.data[-1:])