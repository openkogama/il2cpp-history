
/* Void Activate(String) */

void Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_Activate
               (GamePassesTextBubble *this,String *textBubbleText,MethodInfo *method)

{
  this_00 = (this->fields).fader;
  if (this_00 != (NotificationFade *)0x0) {
    NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
    pTVar1 = (this->fields).text;
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,textBubbleText,(pTVar1->klass->vtable).set_text.method);
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
  if (pNVar1 != (NotificationFade *)0x0) {
    pAVar2 = (pNVar1->fields).OnFinished;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__GamePassesTextBubble__OnFaderDone__,
                 (MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
      if (pAVar2 == (Action *)0x0) {
        (pNVar1->fields).OnFinished = (Action *)0x0;
        ppAStack4 = &(pNVar1->fields).OnFinished;
        pAStack5 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar6 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar2;
      }
      if (pAVar6 != (Action *)0x0) {
        (pNVar1->fields).OnFinished = pAVar6;
        uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
        pAStack5 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAStack5 = pAVar2;
        }
        if (pAStack5 != (Action *)0x0) {
          ppAStack4 = &(pNVar1->fields).OnFinished;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar3 = func_?();
code_?:
  _ppAStack0000000c = uVar3;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  if (pNVar1 != (NotificationFade *)0x0) {
    pAVar2 = (pNVar1->fields).OnFinished;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__GamePassesTextBubble__OnFaderDone__,
                 (MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
      if (pAVar2 == (Action *)0x0) {
        (pNVar1->fields).OnFinished = (Action *)0x0;
        ppAStack4 = &(pNVar1->fields).OnFinished;
        pAStack5 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar6 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar2;
      }
      if (pAVar6 != (Action *)0x0) {
        (pNVar1->fields).OnFinished = pAVar6;
        uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
        pAStack5 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAStack5 = pAVar2;
        }
        if (pAStack5 != (Action *)0x0) {
          ppAStack4 = &(pNVar1->fields).OnFinished;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar3 = func_?();
code_?:
  _ppAStack0000000c = uVar3;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

