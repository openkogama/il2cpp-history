
/* Sequence DOJump(Rigidbody2D, Vector2, Single, Int32, Single, Boolean) */

Sequence *
Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D::DOTweenModulePhysics2D_DOJump
          (Rigidbody2D *target,Vector2 endValue,float jumpPower,int32_t numJumps,float duration,
          bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__TweenCallback);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__OnStart<DG::Tweening::Tweener>_DG__Tweening__Tweener__DG__Tweening__TweenCallback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tween_MethodInfo__DG__Tweening__TweenSettingsExtensions__OnUpdate<DG::Tweening::Tween>_DG__Tweening__Tween__DG__Tweening__TweenCallback_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetEase<DG::Tweening::Sequence>_DG__Tweening__Sequence__DG__Tweening__Ease_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetEase<DG::Tweening::Tweener>_DG__Tweening__Tweener__DG__Tweening__Ease_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetLoops<DG::Tweening::Tweener>_DG__Tweening__Tweener__int__DG__Tweening__LoopType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetRelative<DG::Tweening::Tweener>_DG__Tweening__Tweener_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__1_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__2__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__3__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__4_UnityEngine__Vector2_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__5__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0);
  if (object == (Object *)0x0) goto code_?;
  bVar1 = iRam_? != 0;
  object[1].klass = (Object__Class *)target;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  fStack_6 = endValue.x;
  fStack_7 = endValue.y;
  *(float *)&object[3].klass = fStack_6;
  *(float *)((longlong)&object[3].klass + 4) = fStack_7;
  *(undefined4 *)&object[2].klass = 0xbf800000;
  iVar8 = 1;
  if (0 < numJumps) {
    iVar8 = numJumps;
  }
  *(undefined4 *)&object[1].monitor = 0;
  *(undefined1 *)((longlong)&object[1].monitor + 4) = 0;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar9 = DOTween.dll::DG::Tweening::DOTween::DOTween_Sequence((MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  object[2].monitor = (MonitorData *)pSVar9;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&object[2].monitor >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pDVar10 = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(pDVar10,object,
                MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__0__
               );
  pDVar11 = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(pDVar11,object,
                MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__1_UnityEngine__Vector2_
               );
  pTVar12 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (pDVar10,pDVar11,(Vector2)((ulonglong)(uint)jumpPower << 0x20),
                      duration / (float)(iVar8 * 2),(MethodInfo *)0x0);
  if (pTVar12 == (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                 *)0x0) {
code_?:
    if (pTVar12 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                   *)0x0) goto code_?;
code_?:
    pNVar13 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar13,object,
               MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__2__
               ,(MethodInfo *)0x0);
    if (pTVar12 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                   *)0x0) goto code_?;
  }
  else {
    if ((pTVar12->fields)._._._active_k__BackingField != 0) {
      (pTVar12->fields).plugOptions.axisConstraint = 4;
      (pTVar12->fields).plugOptions.snapping = snapping;
      (pTVar12->fields)._._.easeType = 6;
      bVar1 = iRam_? != 0;
      (pTVar12->fields)._._.customEase = (EaseFunction *)0x0;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(pTVar12->fields)._._.customEase >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
    }
    if (((((pTVar12->fields)._._._active_k__BackingField == 0) ||
         ((pTVar12->fields)._._.creationLocked != 0)) || ((pTVar12->fields)._._.isFrom != 0)) ||
       ((pTVar12->fields)._._.isBlendable != 0)) goto code_?;
    (pTVar12->fields)._._._isRelative_k__BackingField = 1;
code_?:
    uVar2 = iVar8 * 2;
    if (((pTVar12->fields)._._._active_k__BackingField == 0) ||
       ((pTVar12->fields)._._.creationLocked != 0)) goto code_?;
    if ((int)uVar2 < -1) {
      uVar2 = 0xffffffff;
    }
    else if (uVar2 == 0) {
      uVar2 = 1;
    }
    (pTVar12->fields)._._.loops = uVar2;
    (pTVar12->fields)._._.loopType = 1;
    if ((pTVar12->fields)._._._.tweenType == 0) {
      if (uVar2 < 0x80000000) {
        (pTVar12->fields)._._.fullDuration = (float)(int)uVar2 * (pTVar12->fields)._._.duration;
      }
      else {
        (pTVar12->fields)._._.fullDuration = INFINITY;
      }
    }
    pNVar13 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar13,object,
               MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__2__
               ,(MethodInfo *)0x0);
code_?:
    if (((pTVar12->fields)._._._active_k__BackingField != 0) &&
       (bVar1 = iRam_? != 0,
       (pTVar12->fields)._._._.onStart = (TweenCallback *)pNVar13, bVar1)) {
      uVar2 = (uint)((ulonglong)&(pTVar12->fields)._._._.onStart >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  bVar1 = iRam_? != 0;
  object[3].monitor = (MonitorData *)pTVar12;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&object[3].monitor >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pSVar9 = (Sequence *)object[2].monitor;
  pDVar10 = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(pDVar10,object,
                MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__3__
               );
  pDVar11 = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(pDVar11,object,
                MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__4_UnityEngine__Vector2_
               );
  endValue_00.y = 0.0;
  endValue_00.x = (float)*(uint *)&object[3].klass;
  pTVar12 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (pDVar10,pDVar11,endValue_00,duration,(MethodInfo *)0x0);
  if ((pTVar12 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar12->fields)._._._active_k__BackingField != 0)) {
    (pTVar12->fields).plugOptions.axisConstraint = 2;
    (pTVar12->fields).plugOptions.snapping = snapping;
    (pTVar12->fields)._._.easeType = 1;
    bVar1 = iRam_? != 0;
    (pTVar12->fields)._._.customEase = (EaseFunction *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(pTVar12->fields)._._.customEase >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  bVar14 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
          TweenSettingsExtensions_ValidateAddToSequence(pSVar9,(Tween *)pTVar12,0,(MethodInfo *)0x0);
  if (bVar14 != 0) {
    if (pSVar9 == (Sequence *)0x0) goto code_?;
    DOTween.dll::DG::Tweening::Sequence::Sequence_DoInsert
              (pSVar9,(Tween *)pTVar12,(pSVar9->fields)._.duration,(MethodInfo *)0x0);
  }
  t = (Tween *)object[3].monitor;
  bVar14 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
          TweenSettingsExtensions_ValidateAddToSequence(pSVar9,t,0,(MethodInfo *)0x0);
  if (bVar14 != 0) {
    if (pSVar9 == (Sequence *)0x0) {
code_?:
      FUN_?();
      pcVar15 = (code *)swi(3);
      pSVar9 = (Sequence *)(*pcVar15)();
      return pSVar9;
    }
    DOTween.dll::DG::Tweening::Sequence::Sequence_DoInsert
              (pSVar9,t,(pSVar9->fields).lastTweenInsertTime,(MethodInfo *)0x0);
  }
  pOVar16 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
                      ((Object *)pSVar9,(Object *)object[1].klass,
                       DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
                      );
  iVar8 = TypeInfo__DG__Tweening__DOTween->static_fields->defaultEaseType;
  if ((pOVar16 != (Object *)0x0) && (*(char *)&pOVar16[0xe].monitor != '\0')) {
    *(int *)((longlong)&pOVar16[0xb].klass + 4) = iVar8;
    if (iVar8 - 0x20U < 4) {
      *(float *)&pOVar16[0xc].klass = (float)(int)*(float *)&pOVar16[0xc].klass;
    }
    bVar1 = iRam_? != 0;
    pOVar16[0xb].monitor = (MonitorData *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&pOVar16[0xb].monitor >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
  }
  pMVar17 = object[3].monitor;
  pNVar13 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar13,object,
             MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass4_0___DOJump_b__5__,
             (MethodInfo *)0x0);
  if (((pMVar17 != (MonitorData *)0x0) && (pMVar17[0xe8] != (MonitorData)0x0)) &&
     (bVar1 = iRam_? != 0, *(NavMesh_OnNavMeshPreUpdate **)(pMVar17 + 0x70) = pNVar13,
     bVar1)) {
    uVar2 = (uint)((ulonglong)(pMVar17 + 0x70) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return (Sequence *)object[2].monitor;
}


/* TweenerCore`3[UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions]
   DOLocalPath(Rigidbody2D, Vector2[], Single, PathType, PathMode, Int32,
   Nullable`1[UnityEngine.Color]) */

TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
* Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D::DOTweenModulePhysics2D_DOLocalPath
            (Rigidbody2D *target,Vector2__Array *path,float duration,PathType__Enum pathType,
            PathMode__Enum pathMode,int32_t resolution,Nullable_1_UnityEngine_Color_ *gizmoColor,
            MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__DOTween__To<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>__DG__Tweening__Plugins__Core__PathCore__Path__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Plugins__Core__PathCore__Path);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetUpdate<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__DG__Tweening__UpdateType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass6_0___DOLocalPath_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass6_0___DOLocalPath_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass6_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(Rigidbody2D **)(lVar1 + 0x18) = target;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x18U >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    subdivisionsXSegment = 1;
    if (0 < resolution) {
      subdivisionsXSegment = resolution;
    }
    if (path != (Vector2__Array *)0x0) {
      iVar7 = (int)path->max_length;
      waypoints = (Vector3__Array *)FUN_?();
      uVar3 = 0;
      if (0 < iVar7) {
        pVVar8 = waypoints->vector;
        lVar9 = 0;
        pVVar10 = path->vector;
        do {
          if ((uint)path->max_length <= uVar3) {
code_?:
            FUN_?();
            pcVar11 = (code *)swi(3);
            pTVar12 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
                       *)(*pcVar11)();
            return pTVar12;
          }
          fVar13 = pVVar10->y;
          if (waypoints == (Vector3__Array *)0x0) goto code_?;
          if ((uint)waypoints->max_length <= uVar3) goto code_?;
          uVar3 = uVar3 + 1;
          lVar9 = lVar9 + 1;
          pVVar8->x = pVVar10->x;
          pVVar8->y = fVar13;
          pVVar10 = pVVar10 + 1;
          pVVar8->z = 0.0;
          pVVar8 = pVVar8 + 1;
        } while (lVar9 < iVar7);
      }
      pOVar14 = *(Object **)(lVar1 + 0x18);
      if (pOVar14 != (Object *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar15 = pOVar14[1].klass;
        if (pOVar15 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar14,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          pTVar12 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
                     *)(*pcVar11)();
          return pTVar12;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar11 = (code *)swi(3);
          pTVar12 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
                     *)(*pcVar11)();
          return pTVar12;
        }
        pcRam_? = pcVar11;
        gcHandlePtr = (void *)(*pcRam_?)(pOVar15);
        pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                 Unmarshal_UnmarshalUnityObject
                           (gcHandlePtr,
                            UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                           );
        bVar2 = iRam_? != 0;
        *(Object **)(lVar1 + 0x10) = pOVar14;
        if (bVar2) {
          uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__Plugins__Core__PluginsManager__GetCustomPlugin<DG::Tweening::Plugins::PathPlugin,_UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pAVar17 = DOTween.dll::DG::Tweening::Plugins::Core::PluginsManager::
                 PluginsManager_GetCustomPlugin_1
                           (
                           DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__Plugins__Core__PluginsManager__GetCustomPlugin<DG::Tweening::Plugins::PathPlugin,_UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__
                           );
        uVar16 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
        FUN_?(uVar16,lVar1,
                      MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass6_0___DOLocalPath_b__0__
                     );
        uVar18 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
        FUN_?(uVar18,lVar1,
                      MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass6_0___DOLocalPath_b__1_UnityEngine__Vector3_
                     );
        this = (Path *)FUN_?(TypeInfo__DG__Tweening__Plugins__Core__PathCore__Path);
        aNStack_19[0].hasValue = gizmoColor->hasValue;
        aNStack_19[0]._1_3_ = *(undefined3 *)&gizmoColor->field_0x1;
        aNStack_19[0].value.r = (gizmoColor->value).r;
        aNStack_19[0].value.g = (gizmoColor->value).g;
        aNStack_19[0].value.b = (gizmoColor->value).b;
        aNStack_19[0].value.a = (gizmoColor->value).a;
        DOTween.dll::DG::Tweening::Plugins::Core::PathCore::Path::Path__ctor
                  (this,pathType,waypoints,subdivisionsXSegment,aNStack_19,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar14 = (Object *)FUN_?(pAVar17,uVar16,uVar18,this,duration);
        pOVar14 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
                 TweenSettingsExtensions_SetTarget
                           (pOVar14,*(Object **)(lVar1 + 0x18),
                            DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__System__Object_
                           );
        pTVar12 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
                   *)FUN_?(pOVar14);
        if (pTVar12 !=
            (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
             *)0x0) {
          (pTVar12->fields).plugOptions.isRigidbody2D = 1;
          (pTVar12->fields).plugOptions.mode = pathMode;
          (pTVar12->fields).plugOptions.useLocalPosition = 1;
          return pTVar12;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  pTVar12 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
             *)(*pcVar11)();
  return pTVar12;
}


/* TweenerCore`3[UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions]
   DOLocalPath(Rigidbody2D, Path, Single, PathMode) */

TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
* Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D::DOTweenModulePhysics2D_DOLocalPath_1
            (Rigidbody2D *target,Path *path,float duration,PathMode__Enum pathMode,
            MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__DOTween__To<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>__DG__Tweening__Plugins__Core__PathCore__Path__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass8_0___DOLocalPath_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass8_0___DOLocalPath_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass8_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(Rigidbody2D **)(lVar1 + 0x18) = target;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x18U >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    if (*(Component **)(lVar1 + 0x18) != (Component *)0x0) {
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (*(Component **)(lVar1 + 0x18),(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      *(Transform **)(lVar1 + 0x10) = pTVar7;
      if (bVar2) {
        uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__Plugins__Core__PluginsManager__GetCustomPlugin<DG::Tweening::Plugins::PathPlugin,_UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar8 = DOTween.dll::DG::Tweening::Plugins::Core::PluginsManager::
               PluginsManager_GetCustomPlugin_1
                         (
                         DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__Plugins__Core__PluginsManager__GetCustomPlugin<DG::Tweening::Plugins::PathPlugin,_UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__
                         );
      uVar9 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
      FUN_?(uVar9,lVar1,
                    MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass8_0___DOLocalPath_b__0__
                   );
      uVar10 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
      FUN_?(uVar10,lVar1,
                    MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass8_0___DOLocalPath_b__1_UnityEngine__Vector3_
                   );
      if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
        FUN_?();
      }
      t = (Object *)FUN_?(pAVar8,uVar9,uVar10,path,duration);
      pTVar11 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
                *)DOTween.dll::DG::Tweening::TweenSettingsExtensions::
                  TweenSettingsExtensions_SetTarget
                            (t,*(Object **)(lVar1 + 0x18),
                             DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__System__Object_
                            );
      if (pTVar11 != (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
                     *)0x0) {
        (pTVar11->fields).plugOptions.isRigidbody2D = 1;
        (pTVar11->fields).plugOptions.mode = pathMode;
        (pTVar11->fields).plugOptions.useLocalPosition = 1;
        return pTVar11;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  pTVar11 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
            *)(*pcVar12)();
  return pTVar11;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOMove(Rigidbody2D, Vector2, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D::DOTweenModulePhysics2D_DOMove
          (Rigidbody2D *target,Vector2 endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Rigidbody2D__MovePosition_UnityEngine__Vector2_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass0_0___DOMove_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass0_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass0_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Rigidbody2D **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass0_0___DOMove_b__0__
               );
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,uVar9,
                MethodInfo__UnityEngine__Rigidbody2D__MovePosition_UnityEngine__Vector2_);
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOMoveX(Rigidbody2D, Single, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D::DOTweenModulePhysics2D_DOMoveX
          (Rigidbody2D *target,float endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Rigidbody2D__MovePosition_UnityEngine__Vector2_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass1_0___DOMoveX_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass1_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass1_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Rigidbody2D **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass1_0___DOMoveX_b__0__
               );
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,uVar9,
                MethodInfo__UnityEngine__Rigidbody2D__MovePosition_UnityEngine__Vector2_);
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  endValue_00.y = 0.0;
  endValue_00.x = endValue;
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,endValue_00,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.axisConstraint = 2;
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions]
   DOMoveY(Rigidbody2D, Single, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D::DOTweenModulePhysics2D_DOMoveY
          (Rigidbody2D *target,float endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Rigidbody2D__MovePosition_UnityEngine__Vector2_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass2_0___DOMoveY_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass2_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass2_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Rigidbody2D **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector2>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass2_0___DOMoveY_b__0__
               );
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  setter = (DOSetter_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector2>);
  FUN_?(setter,uVar9,
                MethodInfo__UnityEngine__Rigidbody2D__MovePosition_UnityEngine__Vector2_);
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_3
                     (getter,setter,(Vector2)((ulonglong)(uint)endValue << 0x20),duration,
                      (MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector2_UnityEngine_Vector2_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.axisConstraint = 4;
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions]
   DOPath(Rigidbody2D, Vector2[], Single, PathType, PathMode, Int32, Nullable`1[UnityEngine.Color])
    */

TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
* Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D::DOTweenModulePhysics2D_DOPath
            (Rigidbody2D *target,Vector2__Array *path,float duration,PathType__Enum pathType,
            PathMode__Enum pathMode,int32_t resolution,Nullable_1_UnityEngine_Color_ *gizmoColor,
            MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__DOTween__To<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>__DG__Tweening__Plugins__Core__PathCore__Path__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Plugins__Core__PathCore__Path);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetUpdate<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__DG__Tweening__UpdateType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass5_0___DOPath_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass5_0___DOPath_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass5_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(Rigidbody2D **)(lVar1 + 0x10) = target;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    subdivisionsXSegment = 1;
    if (0 < resolution) {
      subdivisionsXSegment = resolution;
    }
    if (path != (Vector2__Array *)0x0) {
      iVar7 = (int)path->max_length;
      waypoints = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar7);
      uVar3 = 0;
      if (0 < iVar7) {
        pVVar8 = waypoints->vector;
        lVar9 = 0;
        pVVar10 = path->vector;
        do {
          if ((uint)path->max_length <= uVar3) {
code_?:
            FUN_?();
            pcVar11 = (code *)swi(3);
            pTVar12 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
                       *)(*pcVar11)();
            return pTVar12;
          }
          fVar13 = pVVar10->y;
          if (waypoints == (Vector3__Array *)0x0) goto code_?;
          if ((uint)waypoints->max_length <= uVar3) goto code_?;
          uVar3 = uVar3 + 1;
          lVar9 = lVar9 + 1;
          pVVar8->x = pVVar10->x;
          pVVar8->y = fVar13;
          pVVar10 = pVVar10 + 1;
          pVVar8->z = 0.0;
          pVVar8 = pVVar8 + 1;
        } while (lVar9 < iVar7);
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__Plugins__Core__PluginsManager__GetCustomPlugin<DG::Tweening::Plugins::PathPlugin,_UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar14 = DOTween.dll::DG::Tweening::Plugins::Core::PluginsManager::
               PluginsManager_GetCustomPlugin_1
                         (
                         DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__Plugins__Core__PluginsManager__GetCustomPlugin<DG::Tweening::Plugins::PathPlugin,_UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__
                         );
      uVar15 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
      FUN_?(uVar15,lVar1,
                    MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass5_0___DOPath_b__0__
                   );
      uVar16 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
      FUN_?(uVar16,lVar1,
                    MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass5_0___DOPath_b__1_UnityEngine__Vector3_
                   );
      this = (Path *)FUN_?(TypeInfo__DG__Tweening__Plugins__Core__PathCore__Path);
      aNStack_17[0].hasValue = gizmoColor->hasValue;
      aNStack_17[0]._1_3_ = *(undefined3 *)&gizmoColor->field_0x1;
      aNStack_17[0].value.r = (gizmoColor->value).r;
      aNStack_17[0].value.g = (gizmoColor->value).g;
      aNStack_17[0].value.b = (gizmoColor->value).b;
      aNStack_17[0].value.a = (gizmoColor->value).a;
      DOTween.dll::DG::Tweening::Plugins::Core::PathCore::Path::Path__ctor
                (this,pathType,waypoints,subdivisionsXSegment,aNStack_17,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar18 = (Object *)FUN_?(pAVar14,uVar15,uVar16,this,duration);
      pOVar18 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
                TweenSettingsExtensions_SetTarget
                          (pOVar18,*(Object **)(lVar1 + 0x10),
                           DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__System__Object_
                          );
      pTVar12 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
                 *)FUN_?(pOVar18);
      if (pTVar12 !=
          (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
           *)0x0) {
        (pTVar12->fields).plugOptions.isRigidbody2D = 1;
        (pTVar12->fields).plugOptions.mode = pathMode;
        return pTVar12;
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  pTVar12 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
             *)(*pcVar11)();
  return pTVar12;
}


/* TweenerCore`3[UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions]
   DOPath(Rigidbody2D, Path, Single, PathMode) */

TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
* Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D::DOTweenModulePhysics2D_DOPath_1
            (Rigidbody2D *target,Path *path,float duration,PathMode__Enum pathMode,
            MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__DOTween__To<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>__DG__Tweening__Plugins__Core__PathCore__Path__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass7_0___DOPath_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass7_0___DOPath_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass7_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(Rigidbody2D **)(lVar1 + 0x10) = target;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__Plugins__Core__PluginsManager__GetCustomPlugin<DG::Tweening::Plugins::PathPlugin,_UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pAVar7 = DOTween.dll::DG::Tweening::Plugins::Core::PluginsManager::
             PluginsManager_GetCustomPlugin_1
                       (
                       DG__Tweening__Plugins__Core__ABSTweenPlugin<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__Plugins__Core__PluginsManager__GetCustomPlugin<DG::Tweening::Plugins::PathPlugin,_UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__
                       );
    uVar8 = FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    FUN_?(uVar8,lVar1,
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass7_0___DOPath_b__0__
                 );
    uVar9 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    FUN_?(uVar9,lVar1,
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass7_0___DOPath_b__1_UnityEngine__Vector3_
                 );
    if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
      FUN_?();
    }
    t = (Object *)FUN_?(pAVar7,uVar8,uVar9,path,duration);
    pTVar10 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
              *)DOTween.dll::DG::Tweening::TweenSettingsExtensions::
                TweenSettingsExtensions_SetTarget
                          (t,*(Object **)(lVar1 + 0x10),
                           DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__System__Object_
                          );
    if (pTVar10 != (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
                   *)0x0) {
      (pTVar10->fields).plugOptions.isRigidbody2D = 1;
      (pTVar10->fields).plugOptions.mode = pathMode;
      return pTVar10;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  pTVar10 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
            *)(*pcVar11)();
  return pTVar10;
}


/* TweenerCore`3[System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions]
   DORotate(Rigidbody2D, Single, Single) */

TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D::DOTweenModulePhysics2D_DORotate
          (Rigidbody2D *target,float endValue,float duration,MethodInfo *method)

{
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
    FUN_?(&MethodInfo__UnityEngine__Rigidbody2D__MoveRotation_float_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass3_0___DORotate_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass3_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass3_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_System_Single_System_Single_DG_Tweening_Plugins_Options_FloatOptions_ *)
             (*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Rigidbody2D **)(lVar1 + 0x10) = target;
  if (bVar4) {
    uVar5 = (uint)(lVar1 + 0x10U >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  getter = (DOGetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<float>)
  ;
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModulePhysics2D____c__DisplayClass3_0___DORotate_b__0__
               );
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  setter = (DOSetter_1_System_Single_ *)FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<float>)
  ;
  FUN_?(setter,uVar9,MethodInfo__UnityEngine__Rigidbody2D__MoveRotation_float_);
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To
                     (getter,setter,endValue,duration,(MethodInfo *)0x0);
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>_>_DG__Tweening__Core__TweenerCore<float,_float,_DG::Tweening::Plugins::Options::FloatOptions>__System__Object_
            );
  return pTVar3;
}

