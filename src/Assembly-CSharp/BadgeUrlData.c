
/* String ToString() */

String * Assembly-CSharp.dll::BadgeUrlData::BadgeUrlData_ToString
                   (BadgeUrlData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = this;
  this = (BadgeUrlData *)(this->fields).level;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  iStack_2 = (pBVar1->fields).friendsLimit;
  pSVar3 = (pBVar1->fields).url;
  arg2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar3 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_Level__0___Url__1___FriendsLimit,arg0,(Object *)pSVar3,arg2,
                      (MethodInfo *)0x0);
  return pSVar3;
}


/* BadgeUrlData() */

void Assembly-CSharp.dll::BadgeUrlData::BadgeUrlData__ctor(BadgeUrlData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).level = -1;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).url = TypeInfo__System__String->static_fields->Empty;
  (this->fields).friendsLimit = 200;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  return;
}


/* BadgeUrlData(Int32, String) */

void Assembly-CSharp.dll::BadgeUrlData::BadgeUrlData__ctor_1
               (BadgeUrlData *this,int32_t level,String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).level = -1;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  (this->fields).url = TypeInfo__System__String->static_fields->Empty;
  (this->fields).friendsLimit = 200;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).level = level;
  (this->fields).url = url;
  return;
}

