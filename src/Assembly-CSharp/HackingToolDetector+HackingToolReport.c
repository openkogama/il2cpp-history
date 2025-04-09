
/* HackingToolDetector+HackingToolReport(ApplicationDesc) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppAVar1 = &(this->fields).app;
  (this->fields).kind = 0;
  *ppAVar1 = app;
  func_?(ppAVar1,app);
  return;
}


/* HackingToolDetector+HackingToolReport(ApplicationDesc, String) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor_1
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,String *exactFind,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppAVar1 = &(this->fields).app;
  (this->fields).kind = 1;
  *ppAVar1 = app;
  func_?(ppAVar1,app);
  ppSVar2 = &(this->fields).exactFind;
  *ppSVar2 = exactFind;
  func_?(ppSVar2,exactFind);
  return;
}


/* HackingToolDetector+HackingToolReport(ApplicationDesc, ApplicationDesc+RegistryKey) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor_2
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,
               ApplicationDesc_RegistryKey *foundKey,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppAVar1 = &(this->fields).app;
  (this->fields).kind = 2;
  *ppAVar1 = app;
  func_?(ppAVar1,app);
  ppAVar2 = &(this->fields).foundKey;
  *ppAVar2 = foundKey;
  func_?(ppAVar2,foundKey);
  return;
}


/* HackingToolDetector+HackingToolReport(ApplicationDesc, ApplicationDesc+RegistryKey, String) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor_3
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,
               ApplicationDesc_RegistryKey *foundKey,String *exactFind,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppAVar1 = &(this->fields).app;
  (this->fields).kind = 3;
  *ppAVar1 = app;
  func_?(ppAVar1,app);
  ppAVar2 = &(this->fields).foundKey;
  *ppAVar2 = foundKey;
  func_?(ppAVar2,foundKey);
  ppSVar3 = &(this->fields).exactFind;
  *ppSVar3 = exactFind;
  func_?(ppSVar3,exactFind);
  return;
}

