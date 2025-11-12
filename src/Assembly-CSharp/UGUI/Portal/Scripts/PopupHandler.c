
/* Void FadeIn() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PopupHandler::PopupHandler_FadeIn
               (PopupHandler *this,MethodInfo *method)

{
  this_00 = (this->fields).canvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_03 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_03,1,(MethodInfo *)0x0);
      duration = _UNK_?;
      this_01 = (this->fields).fadingTween;
      if (this_01 != (FadingTween *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__UGUI__Portal__Scripts__FadingTween___FadeIn_b__2_0__,
                        _UNK_?,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__DG__Tweening__TweenCallback);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback)
        ;
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this_01,
                   MethodInfo__UGUI__Portal__Scripts__FadingTween___FadeIn_b__2_0__,
                   (MethodInfo *)0x0);
        FadingTween::FadingTween_Fade
                  (this_01,_UNK_?,duration,(TweenCallback *)this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdatePopup(String, Action) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::PopupHandler::PopupHandler_UpdatePopup
               (PopupHandler *this,String *title,Action *actionButtonPressedCallback,
               MethodInfo *method)

{
  pTVar1 = (this->fields).titleText;
  if (pTVar1 == (TMP_Text *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(pTVar1->klass->vtable).set_text.methodPtr)
            (pTVar1,title,(pTVar1->klass->vtable).set_text.method);
  bVar3 = iRam_? != 0;
  (this->fields).actionButtonCallback = actionButtonPressedCallback;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).actionButtonCallback >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}

