
/* Void Fade(Single, Single, TweenCallback) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::FadingTween::FadingTween_Fade
               (FadingTween *this,float endValue,float duration,TweenCallback *onEnd,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__TweenCallback);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).fadeTween;
  if (pTVar1 != (Tween *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DG__Tweening__DOTween);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__DG__Tweening__Core__TweenManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DG__Tweening__DOTween);
    }
    if ((TypeInfo__DG__Tweening__DOTween->static_fields->initialized != 0) &&
       ((pTVar1->fields)._active_k__BackingField != 0)) {
      if ((pTVar1->fields).isSequenced == 0) {
        if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (TypeInfo__DG__Tweening__Core__TweenManager->static_fields->isUpdateLoop == 0) {
          if (*(int *)&(TypeInfo__DG__Tweening__Core__TweenManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          DOTween.dll::DG::Tweening::Core::TweenManager::TweenManager_Despawn
                    (pTVar1,1,(MethodInfo *)0x0);
        }
        else {
          (pTVar1->fields)._active_k__BackingField = 0;
        }
      }
      else {
        iVar2 = FUN_?();
        if (1 < iVar2) {
          DOTween.dll::DG::Tweening::Core::Debugger::Debugger_1_LogNestedTween
                    (pTVar1,(MethodInfo *)0x0);
        }
      }
    }
  }
  pCVar3 = (this->fields).canvasGroup;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass0_0___DOFade_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass0_0___DOFade_b__1_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass0_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar4 = FUN_?(TypeInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass0_0);
  if (lVar4 != 0) {
    bVar5 = iRam_? != 0;
    *(CanvasGroup **)(lVar4 + 0x10) = pCVar3;
    if (bVar5) {
      uVar6 = (uint)(lVar4 + 0x10U >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    getter = (DOGetter_1_System_Single_ *)
             FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>);
    FUN_?(getter,lVar4,
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass0_0___DOFade_b__0__);
    setter = (DOSetter_1_System_Single_ *)
             FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>);
    FUN_?(setter,lVar4,
                  MethodInfo__DG__Tweening__DOTweenModuleUI____c__DisplayClass0_0___DOFade_b__1_float_
                 );
    if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
      FUN_?();
    }
    t = DOTween.dll::DG::Tweening::DOTween::DOTween_To
                  (getter,setter,endValue,duration,(MethodInfo *)0x0);
    DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
              ((Object *)t,*(Object **)(lVar4 + 0x10),
               DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
              );
    bVar5 = iRam_? != 0;
    (this->fields).fadeTween = (Tween *)t;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).fadeTween >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pTVar1 = (this->fields).fadeTween;
    if (pTVar1 != (Tween *)0x0) {
      pTVar10 = (TweenCallback *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(pTVar1->fields).onComplete,(Delegate *)onEnd,
                          (MethodInfo *)0x0);
      if (pTVar10 == (TweenCallback *)0x0) {
        (pTVar1->fields).onComplete = (TweenCallback *)0x0;
      }
      else {
        pTVar11 = (TweenCallback *)0x0;
        if (pTVar10->klass == TypeInfo__DG__Tweening__TweenCallback) {
          pTVar11 = pTVar10;
        }
        if (pTVar11 == (TweenCallback *)0x0) {
          FUN_?(pTVar10);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        (pTVar1->fields).onComplete = pTVar11;
        pTVar11 = (TweenCallback *)0x0;
        if (pTVar10->klass == TypeInfo__DG__Tweening__TweenCallback) {
          pTVar11 = pTVar10;
        }
        if (pTVar11 == (TweenCallback *)0x0) {
          FUN_?(pTVar10);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(pTVar1->fields).onComplete >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void FadeIn(Single) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::FadingTween::FadingTween_FadeIn
               (FadingTween *this,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__UGUI__Portal__Scripts__FadingTween___FadeIn_b__2_0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__TweenCallback);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__UGUI__Portal__Scripts__FadingTween___FadeIn_b__2_0__
             ,(MethodInfo *)0x0);
  FadingTween_Fade(this,_UNK_?,duration,(TweenCallback *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void FadeOut(Single) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::FadingTween::FadingTween_FadeOut
               (FadingTween *this,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__UGUI__Portal__Scripts__FadingTween___FadeOut_b__3_0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__TweenCallback);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__UGUI__Portal__Scripts__FadingTween___FadeOut_b__3_0__,(MethodInfo *)0x0);
  FadingTween_Fade(this,0.0,duration,(TweenCallback *)this_00,(MethodInfo *)0x0);
  return;
}


/* IEnumerator TestFade() */

IEnumerator *
Assembly-CSharp.dll::UGUI::Portal::Scripts::FadingTween::FadingTween_TestFade
          (FadingTween *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__FadingTween___TestFade_d__5);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__UGUI__Portal__Scripts__FadingTween___TestFade_d__5);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void <FadeIn>b__2_0() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::FadingTween::FadingTween__FadeIn_b__2_0
               (FadingTween *this,MethodInfo *method)

{
  pCVar1 = (this->fields).canvasGroup;
  if (pCVar1 != (CanvasGroup *)0x0) {
    uVar2 = (undefined7)((ulonglong)method >> 8);
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
              (pCVar1,1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).canvasGroup;
    if (pCVar1 != (CanvasGroup *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                      ,CONCAT71(uVar2,1),0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pCVar1 == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (pCVar1->fields)._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,1);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <FadeOut>b__3_0() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::FadingTween::FadingTween__FadeOut_b__3_0
               (FadingTween *this,MethodInfo *method)

{
  pCVar1 = (this->fields).canvasGroup;
  if (pCVar1 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_interactable
              (pCVar1,0,(MethodInfo *)0x0);
    pCVar1 = (this->fields).canvasGroup;
    if (pCVar1 != (CanvasGroup *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pCVar1 == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (pCVar1->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

