
/* String ToString() */

String * Assembly-CSharp.dll::CubeModelChangedEventArgs::CubeModelChangedEventArgs_ToString
                   (CubeModelChangedEventArgs *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = this;
  this = (CubeModelChangedEventArgs *)CONCAT13((this->fields).Action,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__MV__WorldObject__CubeAction,(int)&this + 3);
  uStack_2._0_2_ = (pCVar1->fields).Pos.x;
  uStack_2._2_2_ = (pCVar1->fields).Pos.y;
  iStack_3 = (pCVar1->fields).Pos.z;
  arg1 = (Object *)func_?(TypeInfo__MV__WorldObject__IntVector,&uStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral__0___1_,arg0,arg1,(MethodInfo *)0x0);
  return pSVar4;
}


/* CubeModelChangedEventArgs(CubeAction, IntVector, MVCubeModelBase) */

void Assembly-CSharp.dll::CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
               (CubeModelChangedEventArgs *this,CubeAction__Enum action,IntVector pos,
               MVCubeModelBase *sender,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__EventArgs);
  }
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  (this->fields).Action = (undefined1)action;
  (this->fields).Pos.x = pos.x;
  (this->fields).Pos.y = pos.y;
  (this->fields).Pos.z = pos.z;
  (this->fields).Sender = sender;
  return;
}

