
/* String ToString() */

String * Assembly-CSharp.dll::BadgeUrlData::BadgeUrlData_ToString
                   (BadgeUrlData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_Level__0___Url__1___FriendsLimit);
    cRam_? = '\x01';
  }
  pBVar1 = this;
  this = (BadgeUrlData *)(this->fields).level;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  iStack_2 = (pBVar1->fields).friendsLimit;
  pSVar3 = (pBVar1->fields).url;
  arg2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  pSVar3 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_Level__0___Url__1___FriendsLimit,arg0,(Object *)pSVar3,arg2,
                      (MethodInfo *)0x0);
  return pSVar3;
}


/* BadgeUrlData() */

void Assembly-CSharp.dll::BadgeUrlData::BadgeUrlData__ctor(BadgeUrlData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).level = -1;
  (this->fields).url = ::StringLiteral__;
  method_00 = (MethodInfo *)&(this->fields).url;
  func_?(method_00,::StringLiteral__);
  (this->fields).friendsLimit = 200;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* BadgeUrlData(Int32, String) */

void Assembly-CSharp.dll::BadgeUrlData::BadgeUrlData__ctor_1
               (BadgeUrlData *this,int32_t level,String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  (this->fields).level = -1;
  (this->fields).url = ::StringLiteral__;
  method_00 = (MethodInfo *)&(this->fields).url;
  func_?(method_00,::StringLiteral__);
  (this->fields).friendsLimit = 200;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).level = level;
  (this->fields).url = url;
  func_?(&(this->fields).url,url);
  return;
}

