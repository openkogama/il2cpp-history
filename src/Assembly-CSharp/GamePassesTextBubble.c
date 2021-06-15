
/* Void Activate(String) */

void Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_Activate
               (GamePassesTextBubble *this,String *textBubbleText,MethodInfo *method)

{
  this_00 = (this->fields).fader;
  if (this_00 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
    pTVar1 = (this->fields).text;
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,textBubbleText,
                 (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      (this->fields).isActive = 1;
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_OnDestroy
               (GamePassesTextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
  if (pNVar1 != (NotificationFade *)0x0) {
    pAVar2 = (pNVar1->fields).OnFinished;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__GamePassesTextBubble__OnFaderDone__,
               (MethodInfo *)0x0);
    pAStack3 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAStack3 != (Action *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action;
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pNVar1->fields).OnFinished = pAVar2;
    return;
  }
  func_?(0);
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnFaderDone() */

void Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_OnFaderDone
               (GamePassesTextBubble *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  if ((this->fields).deactivateAfterFade != 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_Start
               (GamePassesTextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
  if (pNVar1 != (NotificationFade *)0x0) {
    pAVar2 = (pNVar1->fields).OnFinished;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__GamePassesTextBubble__OnFaderDone__,
               (MethodInfo *)0x0);
    pAStack3 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action *)0x0;
    if (pAStack3 != (Action *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action;
      if (pAVar2 == (Action *)0x0) goto code_?;
    }
    (pNVar1->fields).OnFinished = pAVar2;
    return;
  }
  func_?(0);
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_get_IsActive
               (GamePassesTextBubble *this,MethodInfo *method)

{
  return (this->fields).isActive;
}


/* Void set_DeactivateAfterFade(Boolean) */

void Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_set_DeactivateAfterFade
               (GamePassesTextBubble *this,bool value,MethodInfo *method)

{
  (this->fields).deactivateAfterFade = value;
  return;
}

