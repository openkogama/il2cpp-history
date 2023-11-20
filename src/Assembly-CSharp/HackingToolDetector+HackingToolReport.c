
/* HackingToolDetector+HackingToolReport(ApplicationDesc) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).app = app;
  (this->fields).kind = 0;
  func_?(&(this->fields).app,app);
  return;
}


/* HackingToolDetector+HackingToolReport(ApplicationDesc, String) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor_1
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,String *exactFind,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).app = app;
  (this->fields).kind = 1;
  func_?(&(this->fields).app,app);
  (this->fields).exactFind = exactFind;
  func_?(&(this->fields).exactFind,exactFind);
  return;
}


/* HackingToolDetector+HackingToolReport(ApplicationDesc, ApplicationDesc+RegistryKey) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor_2
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,
               ApplicationDesc_RegistryKey *foundKey,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).app = app;
  (this->fields).kind = 2;
  func_?(&(this->fields).app,app);
  (this->fields).foundKey = foundKey;
  func_?(&(this->fields).foundKey,foundKey);
  return;
}


/* HackingToolDetector+HackingToolReport(ApplicationDesc, ApplicationDesc+RegistryKey, String) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor_3
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,
               ApplicationDesc_RegistryKey *foundKey,String *exactFind,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).app = app;
  (this->fields).kind = 3;
  func_?(&(this->fields).app,app);
  (this->fields).foundKey = foundKey;
  func_?(&(this->fields).foundKey,foundKey);
  (this->fields).exactFind = exactFind;
  func_?(&(this->fields).exactFind,exactFind);
  return;
}

