
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
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_OnDestroy
               (GamePassesTextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__GamePassesTextBubble__OnFaderDone__);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
  if (pNVar1 == (NotificationFade *)0x0) {
    uVar2 = func_?();
  }
  else {
    pAVar3 = (pNVar1->fields).OnFinished;
    ppAVar4 = &(pNVar1->fields).OnFinished;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__GamePassesTextBubble__OnFaderDone__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__System__Action,pAVar3);
    ppAStack5 = ppAVar4;
    if (pAVar3 == (Action *)0x0) {
      pAStack6 = (Action *)0x0;
      *ppAVar4 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar3;
    }
    if (pAVar7 != (Action *)0x0) {
      *ppAVar4 = pAVar7;
      uVar2 = CONCAT44(TypeInfo__System__Action,pAVar3);
      pAStack6 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAStack6 = pAVar3;
      }
      if (pAStack6 != (Action *)0x0) {
        func_?();
        return;
      }
    }
  }
  _ppAStack0000000c = uVar2;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnFaderDone() */

void Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_OnFaderDone
               (GamePassesTextBubble *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  if ((this->fields).deactivateAfterFade != 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      uVar1 = func_?(&stack0xfffffff8);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__GamePassesTextBubble__OnFaderDone__);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
  if (pNVar1 == (NotificationFade *)0x0) {
    uVar2 = func_?();
  }
  else {
    pAVar3 = (pNVar1->fields).OnFinished;
    ppAVar4 = &(pNVar1->fields).OnFinished;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__GamePassesTextBubble__OnFaderDone__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar2 = CONCAT44(TypeInfo__System__Action,pAVar3);
    ppAStack5 = ppAVar4;
    if (pAVar3 == (Action *)0x0) {
      pAStack6 = (Action *)0x0;
      *ppAVar4 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar3;
    }
    if (pAVar7 != (Action *)0x0) {
      *ppAVar4 = pAVar7;
      uVar2 = CONCAT44(TypeInfo__System__Action,pAVar3);
      pAStack6 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAStack6 = pAVar3;
      }
      if (pAStack6 != (Action *)0x0) {
        func_?();
        return;
      }
    }
  }
  _ppAStack0000000c = uVar2;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

