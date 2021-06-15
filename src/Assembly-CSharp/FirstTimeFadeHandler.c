
/* Void DoAction() */

void Assembly-CSharp.dll::FirstTimeFadeHandler::FirstTimeFadeHandler_DoAction
               (FirstTimeFadeHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).finishedAction;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)(this->fields).targetGameObject,
               MethodInfo__System__Action<UnityEngine::GameObject>__Invoke_UnityEngine__GameObject_)
    ;
  }
  (this->fields).targetGameObject = (GameObject *)0x0;
  (this->fields).finishedAction = (Action_1_UnityEngine_GameObject_ *)0x0;
  return;
}


/* Void StartFadeIn() */

void Assembly-CSharp.dll::FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeIn
               (FirstTimeFadeHandler *this,MethodInfo *method)

{
  this_00 = (this->fields).canvasGroup;
  (this->fields).fadingIn = 1;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    (this->fields).currentFadeInTime = 0.0;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartFadeOut(Action`1[UnityEngine.GameObject], GameObject) */

void Assembly-CSharp.dll::FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
               (FirstTimeFadeHandler *this,Action_1_UnityEngine_GameObject_ *finishedAction,
               GameObject *targetGameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currentFadeOutTime = (this->fields).fadeOutTime;
  this_00 = (this->fields).canvasGroup;
  (this->fields).fadingOut = 1;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,1.0,(MethodInfo *)0x0);
    pAVar1 = (Action_1_UnityEngine_GameObject_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)(this->fields).finishedAction,(Delegate *)finishedAction,
                        (MethodInfo *)0x0);
    pAVar2 = (Action_1_UnityEngine_GameObject_ *)0x0;
    if (pAVar1 != (Action_1_UnityEngine_GameObject_ *)0x0) {
      if (pAVar1->klass == TypeInfo__System__Action<UnityEngine::GameObject>) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 == (Action_1_UnityEngine_GameObject_ *)0x0) goto code_?;
    }
    (this->fields).finishedAction = pAVar2;
    (this->fields).targetGameObject = targetGameObject;
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeFadeHandler::FirstTimeFadeHandler_Update
               (FirstTimeFadeHandler *this,MethodInfo *method)

{
  if ((this->fields).fadingOut == 0) {
    if ((this->fields).fadingIn != 0) {
      fVar1 = (this->fields).currentFadeInTime;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      fVar2 = fVar2 + fVar1;
      pCVar3 = (this->fields).canvasGroup;
      (this->fields).currentFadeInTime = fVar2;
      if (pCVar3 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar3,fVar2 / (this->fields).fadeInTime,(MethodInfo *)0x0);
      if ((this->fields).fadeInTime <= (this->fields).currentFadeInTime) {
        (this->fields).fadingIn = 0;
      }
    }
  }
  else {
    fVar1 = (this->fields).currentFadeOutTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    pCVar3 = (this->fields).canvasGroup;
    (this->fields).currentFadeOutTime = fVar1;
    if (pCVar3 == (CanvasGroup *)0x0) {
code_?:
      func_?(0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar3,fVar1 / (this->fields).fadeOutTime,(MethodInfo *)0x0);
    if ((this->fields).currentFadeOutTime <= 0.0) {
      bVar5 = cRam_? == '\0';
      (this->fields).fadingOut = 0;
      if (bVar5) {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (this->fields).finishedAction;
      if (this_00 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_00,(Dictionary_2_System_String_System_Object_ *)
                           (this->fields).targetGameObject,
                   MethodInfo__System__Action<UnityEngine::GameObject>__Invoke_UnityEngine__GameObject_
                  );
      }
      (this->fields).finishedAction = (Action_1_UnityEngine_GameObject_ *)0x0;
      (this->fields).targetGameObject = (GameObject *)0x0;
      return;
    }
  }
  return;
}


/* FirstTimeFadeHandler() */

void Assembly-CSharp.dll::FirstTimeFadeHandler::FirstTimeFadeHandler__ctor
               (FirstTimeFadeHandler *this,MethodInfo *method)

{
  (this->fields).fadeOutTime = 0.3;
  (this->fields).fadeInTime = 0.3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

