
/* String ToString() */

String * Assembly-CSharp.dll::XPLevelLimits::XPLevelLimits_ToString
                   (XPLevelLimits *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = this;
  this = (XPLevelLimits *)(this->fields)._Level_k__BackingField;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  iStack_2 = (pXVar1->fields)._PrevXP_k__BackingField;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_2);
  iStack_3 = (pXVar1->fields)._NextXP_k__BackingField;
  arg2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar4 = mscorlib.dll::System::String::String_Format_2
                     (StringLiteral_Level__0___PrevXP__1___NextXP__2,arg0,arg1,arg2,
                      (MethodInfo *)0x0);
  return pSVar4;
}


/* Boolean Validate(Int32) */

bool Assembly-CSharp.dll::XPLevelLimits::XPLevelLimits_Validate
               (XPLevelLimits *this,int32_t currentXp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PrevXP_k__BackingField;
  iVar2 = (this->fields)._NextXP_k__BackingField;
  if (iVar1 < iVar2) {
    if (currentXp < iVar1) {
      this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      message = StringLiteral_currentXp___prevXp;
    }
    else {
      if (iVar2 <= currentXp) {
        return 0;
      }
      if (-1 < currentXp) {
        return 1;
      }
      this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      message = StringLiteral_currentXp__0;
    }
  }
  else {
    this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
    message = StringLiteral_prevXp___nextXp;
  }
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Int32 XpRel(Int32) */

int32_t Assembly-CSharp.dll::XPLevelLimits::XPLevelLimits_XpRel
                  (XPLevelLimits *this,int32_t currentXp,MethodInfo *method)

{
  return currentXp - (this->fields)._PrevXP_k__BackingField;
}


/* Int32 get_XPNextRel() */

int32_t Assembly-CSharp.dll::XPLevelLimits::XPLevelLimits_get_XPNextRel
                  (XPLevelLimits *this,MethodInfo *method)

{
  return (this->fields)._NextXP_k__BackingField - (this->fields)._PrevXP_k__BackingField;
}

