
/* String ToString() */

String * Assembly-CSharp.dll::CubeModelChangedEventArgs::CubeModelChangedEventArgs_ToString
                   (CubeModelChangedEventArgs *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeAction);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&StringLiteral__0___1_);
    cRam_? = '\x01';
  }
  pCVar1 = this;
  this = (CubeModelChangedEventArgs *)CONCAT13((this->fields).Action,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__MV__WorldObject__CubeAction,(int)&this + 3);
  uStack_2._0_2_ = (pCVar1->fields).Pos.x;
  uStack_2._2_2_ = (pCVar1->fields).Pos.y;
  iStack_3 = (pCVar1->fields).Pos.z;
  arg1 = (Object *)func_?(TypeInfo__MV__WorldObject__IntVector,&uStack_2);
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
    func_?(&TypeInfo__System__EventArgs);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__EventArgs);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,(MethodInfo *)0x0);
  ppMVar1 = &(this->fields).Sender;
  (this->fields).Action = (undefined1)action;
  (this->fields).Pos.x = pos.x;
  (this->fields).Pos.y = pos.y;
  (this->fields).Pos.z = pos.z;
  *ppMVar1 = sender;
  func_?(ppMVar1,sender);
  return;
}

