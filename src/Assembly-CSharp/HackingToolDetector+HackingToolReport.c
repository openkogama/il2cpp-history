
/* HackingToolDetector+HackingToolReport(ApplicationDesc) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).kind = 0;
  (this->fields).app = app;
  return;
}


/* HackingToolDetector+HackingToolReport(ApplicationDesc, String) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor_1
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,String *exactFind,
               MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).app = app;
  (this->fields).kind = 1;
  (this->fields).exactFind = exactFind;
  return;
}


/* HackingToolDetector+HackingToolReport(ApplicationDesc, ApplicationDesc+RegistryKey) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor_2
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,
               ApplicationDesc_RegistryKey *foundKey,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).app = app;
  (this->fields).kind = 2;
  (this->fields).foundKey = foundKey;
  return;
}


/* HackingToolDetector+HackingToolReport(ApplicationDesc, ApplicationDesc+RegistryKey, String) */

void Assembly-CSharp.dll::HackingToolDetector+HackingToolReport::
     HackingToolDetector_HackingToolReport__ctor_3
               (HackingToolDetector_HackingToolReport *this,ApplicationDesc *app,
               ApplicationDesc_RegistryKey *foundKey,String *exactFind,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).app = app;
  (this->fields).foundKey = foundKey;
  (this->fields).kind = 3;
  (this->fields).exactFind = exactFind;
  return;
}

