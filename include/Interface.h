#pragma once

class WorkTime
{
public:
  virtual void pay_per_hour() = 0;
};

class ProjectPay
{
public:
  virtual void pay_for_projects() = 0;
};

class Heading
{
public:
  virtual void pay_for_heading() = 0;
};
