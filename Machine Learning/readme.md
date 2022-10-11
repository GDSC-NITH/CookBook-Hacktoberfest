# Machine Learning
> Machine learning (ML) is a type of artificial intelligence (AI) that allows software applications to become more accurate at predicting outcomes without being explicitly programmed to do so. Machine learning algorithms use historical data as input to predict new output values.

### Contributors are Welcome to contribute to this repo by explaining these topics below in the form of blog. The code used for explaining these topics should be concised and properly documented.

### Regression -
Regression analysis is a predictive modelling technique that analyzes the relation between the target or dependent variable and independent variable in a dataset. The different types of regression analysis techniques get used when the target and independent variables show a linear or non-linear relationship between each other, and the target variable contains continuous values. The regression technique gets used mainly to determine the predictor strength, forecast trend, time series, and in case of cause & effect relation. 

Regression analysis is the primary technique to solve the regression problems in machine learning using data modelling. It involves determining the best fit line, which is a line that passes through all the data points in such a way that distance of the line from each data point is minimized.

Types of Regression Analysis Techniques
There are many types of regression analysis techniques, and the use of each method depends upon the number of factors. These factors include the type of target variable, shape of the regression line, and the number of independent variables. 

Below are the different regression techniques:

Linear Regression
Logistic Regression
Ridge Regression
Lasso Regression
Polynomial Regression
Bayesian Linear Regression
Must Read: Free deep learning course!

The different types of regression in machine learning techniques are explained below in detail:

1. Linear Regression
Linear regression is one of the most basic types of regression in machine learning. The linear regression model consists of a predictor variable and a dependent variable related linearly to each other. In case the data involves more than one independent variable, then linear regression is called multiple linear regression models. 

The below-given equation is used to denote the linear regression model:

y=mx+c+e

where m is the slope of the line, c is an intercept, and e represents the error in the model.


The best fit line is determined by varying the values of m and c. The predictor error is the difference between the observed values and the predicted value. The values of m and c get selected in such a way that it gives the minimum predictor error. It is important to note that a simple linear regression model is susceptible to outliers. Therefore, it should not be used in case of big size data.

There are different types of linear regression. The two major types of linear regression are simple linear regression and multiple linear regression. Below is the formula for simple linear regression.



Here, y is the predicted value of the dependent variable (y) for any value of the independent variable (x)
β0  is the intercepted, aka the value of y when x is zero
β1 is the regression coefficient, meaning the expected change in y when x increases
x is the independent variable 
∈ is the estimated error in the regression
Simple linear regression can be used:

To find the intensity of dependency between two variables. Such as the rate of carbon emission and global warming. 
To find the value of the dependent variable on an explicit value of the independent variable. For example, finding the amount of increase in atmospheric temperature with a certain amount of carbon dioxide emission. 
In multiple linear regression, a relationship is established between two or more independent variables and the corresponding dependent variables. Below is the equation for multiple linear regression. 

Here,  y is the predicted value of the dependent variable 
β0 = Value of y when other parameters are zero
β1X1= The regression coefficient of the first variable
…= Repeating the same no matter how many variables you test
βnXn= Regression coefficient of the last independent variable 
∈ = Estimated error in the regression
Multiple linear regression can be used:

To estimate how strongly two or more independent variables influence the single dependent variable. Such as how location, time, condition, and area can influence the price of a property.
To find the value of the dependent variables at a definite condition of all the independent variables. For example, finding the price of a property located at a certain place, with a specific area and its condition. 
Also visit upGrad’s Degree Counselling page for all undergraduate and postgraduate programs.

2. Logistic Regression
Logistic regression is one of the types of regression analysis technique, which gets used when the dependent variable is discrete. Example: 0 or 1, true or false, etc. This means the target variable can have only two values, and a sigmoid curve denotes the relation between the target variable and the independent variable.

Logit function is used in Logistic Regression to measure the relationship between the target variable and independent variables. Below is the equation that denotes the logistic regression.

logit(p) = ln(p/(1-p)) = b0+b1X1+b2X2+b3X3….+bkXk

where p is the probability of occurrence of the feature.

For selecting logistic regression, as the regression analyst technique, it should be noted, the size of data is large with the almost equal occurrence of values to come in target variables. Also, there should be no multicollinearity, which means that there should be no correlation between independent variables in the dataset.

3. Ridge Regression

This is another one of the types of regression in machine learning which is usually used when there is a high correlation between the independent variables. This is because, in the case of multi collinear data, the least square estimates give unbiased values. But, in case the collinearity is very high, there can be some bias value. Therefore, a bias matrix is introduced in the equation of Ridge Regression. This is a powerful regression method where the model is less susceptible to overfitting. 

Below is the equation used to denote the Ridge Regression, where the introduction of λ (lambda) solves the problem of multicollinearity:

β = (X^{T}X + λ*I)^{-1}X^{T}y



4. Lasso Regression
Lasso Regression is one of the types of regression in machine learning that performs regularization along with feature selection. It prohibits the absolute size of the regression coefficient. As a result, the coefficient value gets nearer to zero, which does not happen in the case of Ridge Regression.

Due to this, feature selection gets used in Lasso Regression, which allows selecting a set of features from the dataset to build the model. In the case of Lasso Regression, only the required features are used, and the other ones are made zero. This helps in avoiding the overfitting in the model. In case the independent variables are highly collinear, then Lasso regression picks only one variable and makes other variables to shrink to zero.


Below is the equation that represents the Lasso Regression method:

N^{-1}Σ^{N}_{i=1}f(x_{i}, y_{I}, α, β)


Best Machine Learning Courses & AI Courses Online
Master of Science in Machine Learning & AI from LJMU	Executive Post Graduate Programme in Machine Learning & AI from IIITB
Advanced Certificate Programme in Machine Learning & NLP from IIITB	Advanced Certificate Programme in Machine Learning & Deep Learning from IIITB	Executive Post Graduate Program in Data Science & Machine Learning from University of Maryland
To Explore all our courses, visit our page below.
Machine Learning Courses

5. Polynomial Regression
Polynomial Regression is another one of the types of regression analysis techniques in machine learning, which is the same as Multiple Linear Regression with a little modification. In Polynomial Regression, the relationship between independent and dependent variables, that is X and Y, is denoted by the n-th degree.

It is a linear model as an estimator. Least Mean Squared Method is used in Polynomial Regression also. The best fit line in Polynomial Regression that passes through all the data points is not a straight line, but a curved line, which depends upon the power of X or value of n.

 

Source

While trying to reduce the Mean Squared Error to a minimum and to get the best fit line, the model can be prone to overfitting. It is recommended to analyze the curve towards the end as the higher Polynomials can give strange results on extrapolation. 

Below equation represents the Polynomial Regression:

l = β0+ β0x1+ε

Read: Machine Learning Project Ideas

6. Bayesian Linear Regression
Bayesian Regression is one of the types of regression in machine learning that uses the Bayes theorem to find out the value of regression coefficients. In this method of regression, the posterior distribution of the features is determined instead of finding the least-squares. Bayesian Linear Regression is like both Linear Regression and Ridge Regression but is more stable than the simple Linear Regression.

 

Source

People often wonder “what is regression in AI” or “what is regression in machine learning”. Machine learning is a subset of AI; hence, both questions have the same answer. 

In the case of regression in AI, different algorithms are used make a machine learn the relationship between the provided data sets and make predictions accordingly. Hence, regression in AI is mainly used to add a level of automation to the machines. 

Regression AI is often used in sectors like finance and investment, where establishing a relationship between a single dependent variable and multiple independent variables is a common case. A common example of regression AI will be factors that estimate a house’s price based on its location, size, ROI, etc. 

Regression plays a vital role in predictive modelling and is found in many machine learning applications. Algorithms from the regressions provide different perspectives regarding the relationship between the variables and their outcomes. These set models could then be used as a guideline for fresh input data or to find missing data. 

As the models are trained to understand a variety of relationships between different variables, they are often extremely helpful in predicting the portfolio performance or stocks and trends. These implementations fall under machine learning in finance. 

The very common use of regression in AI includes:

Predicting a company’s sales or marketing success
Generating continuous outcomes like stock prices
Forecasting different trends or customer’s purchase behaviour

EXAMPLE-
PYTHON CODE FOR REGRESSION
# Simple Linear Regression

# Importing the libraries
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

# Importing the dataset
dataset = pd.read_csv('Salary_Data.csv')
X = dataset.iloc[:, :-1].values
y = dataset.iloc[:, -1].values

# Splitting the dataset into the Training set and Test set
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 1/3, random_state = 0)

# Training the Simple Linear Regression model on the Training set
from sklearn.linear_model import LinearRegression
regressor = LinearRegression()
regressor.fit(X_train, y_train)

# Predicting the Test set results
y_pred = regressor.predict(X_test)

# Visualising the Training set results
plt.scatter(X_train, y_train, color = 'red')
plt.plot(X_train, regressor.predict(X_train), color = 'blue')
plt.title('Salary vs Experience (Training set)')
plt.xlabel('Years of Experience')
plt.ylabel('Salary')
plt.show()

# Visualising the Test set results
plt.scatter(X_test, y_test, color = 'red')
plt.plot(X_train, regressor.predict(X_train), color = 'blue')
plt.title('Salary vs Experience (Test set)')
plt.xlabel('Years of Experience')
plt.ylabel('Salary')
plt.show()
### Classification -
Explain about it and Train, Evaluated and Optimize a model for regression problem

### Clustering - 
Explain about it and Train, Evaluated and Optimize a model for regression problem
