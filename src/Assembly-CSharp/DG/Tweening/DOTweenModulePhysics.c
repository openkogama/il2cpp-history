
/* Sequence DOJump(Rigidbody, Vector3, Single, Int32, Single, Boolean) */

Sequence *
Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics::DOTweenModulePhysics_DOJump
          (Rigidbody *target,Vector3 *endValue,float jumpPower,int32_t numJumps,float duration,
          bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_);
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
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0___DOJump_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0___DOJump_b__1__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0___DOJump_b__2__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0___DOJump_b__3__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0___DOJump_b__4__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0);
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
  fVar6 = endValue->z;
  object[3].klass = *(Object__Class **)endValue;
  *(float *)&object[3].monitor = fVar6;
  *(undefined4 *)&object[2].klass = 0xbf800000;
  iVar7 = 1;
  if (0 < numJumps) {
    iVar7 = numJumps;
  }
  *(undefined4 *)&object[1].monitor = 0;
  *(undefined1 *)((longlong)&object[1].monitor + 4) = 0;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar8 = DOTween.dll::DG::Tweening::DOTween::DOTween_Sequence((MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  object[2].monitor = (MonitorData *)pSVar8;
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
  pDVar9 = (DOGetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
  FUN_?(pDVar9,object,
                MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0___DOJump_b__0__
               );
  pOVar10 = object[1].klass;
  pDVar11 = (DOSetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
  FUN_?(pDVar11,pOVar10,MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_
               );
  aVStack_12[0]._0_8_ = (ulonglong)(uint)jumpPower << 0x20;
  aVStack_12[0].z = 0.0;
  pTVar13 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                      (pDVar9,pDVar11,aVStack_12,duration / (float)(iVar7 * 2),(MethodInfo *)0x0);
  if (pTVar13 ==
      (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
       *)0x0) {
code_?:
    if (pTVar13 !=
        (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
         *)0x0) goto code_?;
code_?:
    pNVar14 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar14,object,
               MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0___DOJump_b__1__,
               (MethodInfo *)0x0);
    if (pTVar13 !=
        (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
         *)0x0) goto code_?;
  }
  else {
    if ((pTVar13->fields)._._._active_k__BackingField != 0) {
      (pTVar13->fields).plugOptions.axisConstraint = 4;
      (pTVar13->fields).plugOptions.snapping = snapping;
      (pTVar13->fields)._._.easeType = 6;
      bVar1 = iRam_? != 0;
      (pTVar13->fields)._._.customEase = (EaseFunction *)0x0;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(pTVar13->fields)._._.customEase >> 0xc);
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
    if (((((pTVar13->fields)._._._active_k__BackingField == 0) ||
         ((pTVar13->fields)._._.creationLocked != 0)) || ((pTVar13->fields)._._.isFrom != 0)) ||
       ((pTVar13->fields)._._.isBlendable != 0)) goto code_?;
    (pTVar13->fields)._._._isRelative_k__BackingField = 1;
code_?:
    uVar2 = iVar7 * 2;
    if (((pTVar13->fields)._._._active_k__BackingField == 0) ||
       ((pTVar13->fields)._._.creationLocked != 0)) goto code_?;
    if ((int)uVar2 < -1) {
      uVar2 = 0xffffffff;
    }
    else if (uVar2 == 0) {
      uVar2 = 1;
    }
    (pTVar13->fields)._._.loops = uVar2;
    (pTVar13->fields)._._.loopType = 1;
    if ((pTVar13->fields)._._._.tweenType == 0) {
      if (uVar2 < 0x80000000) {
        (pTVar13->fields)._._.fullDuration = (float)(int)uVar2 * (pTVar13->fields)._._.duration;
      }
      else {
        (pTVar13->fields)._._.fullDuration = INFINITY;
      }
    }
    pNVar14 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar14,object,
               MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0___DOJump_b__1__,
               (MethodInfo *)0x0);
code_?:
    if (((pTVar13->fields)._._._active_k__BackingField != 0) &&
       (bVar1 = iRam_? != 0,
       (pTVar13->fields)._._._.onStart = (TweenCallback *)pNVar14, bVar1)) {
      uVar2 = (uint)((ulonglong)&(pTVar13->fields)._._._.onStart >> 0xc);
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
  object[4].klass = (Object__Class *)pTVar13;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(object + 4) >> 0xc);
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
  pSVar8 = (Sequence *)object[2].monitor;
  pDVar9 = (DOGetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
  FUN_?(pDVar9,object,
                MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0___DOJump_b__2__
               );
  pOVar10 = object[1].klass;
  pDVar11 = (DOSetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
  FUN_?(pDVar11,pOVar10,MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_
               );
  aVStack_12[0]._0_8_ = ZEXT48(*(uint *)&object[3].klass);
  aVStack_12[0].z = 0.0;
  pTVar13 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                      (pDVar9,pDVar11,aVStack_12,duration,(MethodInfo *)0x0);
  if ((pTVar13 !=
       (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
        *)0x0) && ((pTVar13->fields)._._._active_k__BackingField != 0)) {
    (pTVar13->fields).plugOptions.axisConstraint = 2;
    (pTVar13->fields).plugOptions.snapping = snapping;
    (pTVar13->fields)._._.easeType = 1;
    bVar1 = iRam_? != 0;
    (pTVar13->fields)._._.customEase = (EaseFunction *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(pTVar13->fields)._._.customEase >> 0xc);
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
  bVar15 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
          TweenSettingsExtensions_ValidateAddToSequence(pSVar8,(Tween *)pTVar13,0,(MethodInfo *)0x0)
  ;
  if (bVar15 != 0) {
    if (pSVar8 == (Sequence *)0x0) goto code_?;
    DOTween.dll::DG::Tweening::Sequence::Sequence_DoInsert
              (pSVar8,(Tween *)pTVar13,(pSVar8->fields)._.duration,(MethodInfo *)0x0);
  }
  pDVar9 = (DOGetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
  FUN_?(pDVar9,object,
                MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0___DOJump_b__3__
               );
  pOVar10 = object[1].klass;
  pDVar11 = (DOSetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
  FUN_?(pDVar11,pOVar10,MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_
               );
  aVStack_12[0].z = *(float *)&object[3].monitor;
  aVStack_12[0].x = 0.0;
  aVStack_12[0].y = 0.0;
  pTVar13 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                      (pDVar9,pDVar11,aVStack_12,duration,(MethodInfo *)0x0);
  if ((pTVar13 !=
       (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
        *)0x0) && ((pTVar13->fields)._._._active_k__BackingField != 0)) {
    (pTVar13->fields).plugOptions.axisConstraint = 8;
    (pTVar13->fields).plugOptions.snapping = snapping;
    (pTVar13->fields)._._.easeType = 1;
    bVar1 = iRam_? != 0;
    (pTVar13->fields)._._.customEase = (EaseFunction *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(pTVar13->fields)._._.customEase >> 0xc);
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
  bVar15 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
          TweenSettingsExtensions_ValidateAddToSequence(pSVar8,(Tween *)pTVar13,0,(MethodInfo *)0x0)
  ;
  if (bVar15 != 0) {
    if (pSVar8 == (Sequence *)0x0) goto code_?;
    DOTween.dll::DG::Tweening::Sequence::Sequence_DoInsert
              (pSVar8,(Tween *)pTVar13,(pSVar8->fields).lastTweenInsertTime,(MethodInfo *)0x0);
  }
  pOVar10 = object[4].klass;
  bVar15 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::
          TweenSettingsExtensions_ValidateAddToSequence(pSVar8,(Tween *)pOVar10,0,(MethodInfo *)0x0);
  if (bVar15 != 0) {
    if (pSVar8 == (Sequence *)0x0) {
code_?:
      FUN_?();
      pcVar16 = (code *)swi(3);
      pSVar8 = (Sequence *)(*pcVar16)();
      return pSVar8;
    }
    DOTween.dll::DG::Tweening::Sequence::Sequence_DoInsert
              (pSVar8,(Tween *)pOVar10,(pSVar8->fields).lastTweenInsertTime,(MethodInfo *)0x0);
  }
  pOVar17 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
                      ((Object *)pSVar8,(Object *)object[1].klass,
                       DG__Tweening__Sequence_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Sequence>_DG__Tweening__Sequence__System__Object_
                      );
  iVar7 = TypeInfo__DG__Tweening__DOTween->static_fields->defaultEaseType;
  if ((pOVar17 != (Object *)0x0) && (*(char *)&pOVar17[0xe].monitor != '\0')) {
    *(int *)((longlong)&pOVar17[0xb].klass + 4) = iVar7;
    if (iVar7 - 0x20U < 4) {
      *(float *)&pOVar17[0xc].klass = (float)(int)*(float *)&pOVar17[0xc].klass;
    }
    bVar1 = iRam_? != 0;
    pOVar17[0xb].monitor = (MonitorData *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&pOVar17[0xb].monitor >> 0xc);
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
  pOVar10 = object[4].klass;
  pNVar14 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__DG__Tweening__TweenCallback);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar14,object,
             MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass6_0___DOJump_b__4__,
             (MethodInfo *)0x0);
  if (((pOVar10 != (Object__Class *)0x0) && ((char)(pOVar10->_1).cctor_thread != '\0')) &&
     (bVar1 = iRam_? != 0, (pOVar10->_0).interopData = (Il2CppInteropData *)pNVar14,
     bVar1)) {
    uVar2 = (uint)((ulonglong)&(pOVar10->_0).interopData >> 0xc);
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
   DOLocalPath(Rigidbody, Vector3[], Single, PathType, PathMode, Int32,
   Nullable`1[UnityEngine.Color]) */

TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
* Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics::DOTweenModulePhysics_DOLocalPath
            (Rigidbody *target,Vector3__Array *path,float duration,PathType__Enum pathType,
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
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass8_0___DOLocalPath_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass8_0___DOLocalPath_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass8_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(Rigidbody **)(lVar1 + 0x18) = target;
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
                    MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass8_0___DOLocalPath_b__0__
                   );
      uVar10 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
      FUN_?(uVar10,lVar1,
                    MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass8_0___DOLocalPath_b__1_UnityEngine__Vector3_
                   );
      this = (Path *)FUN_?(TypeInfo__DG__Tweening__Plugins__Core__PathCore__Path);
      aNStack_11[0].hasValue = gizmoColor->hasValue;
      aNStack_11[0]._1_3_ = *(undefined3 *)&gizmoColor->field_0x1;
      aNStack_11[0].value.r = (gizmoColor->value).r;
      aNStack_11[0].value.g = (gizmoColor->value).g;
      aNStack_11[0].value.b = (gizmoColor->value).b;
      aNStack_11[0].value.a = (gizmoColor->value).a;
      DOTween.dll::DG::Tweening::Plugins::Core::PathCore::Path::Path__ctor
                (this,pathType,path,subdivisionsXSegment,aNStack_11,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar12 = (Object *)FUN_?(pAVar8,uVar9,uVar10,this,duration);
      pOVar12 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
                         (pOVar12,*(Object **)(lVar1 + 0x18),
                          DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__System__Object_
                         );
      pTVar13 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
                 *)FUN_?(pOVar12);
      if (pTVar13 !=
          (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
           *)0x0) {
        (pTVar13->fields).plugOptions.isRigidbody = 1;
        (pTVar13->fields).plugOptions.mode = pathMode;
        (pTVar13->fields).plugOptions.useLocalPosition = 1;
        return pTVar13;
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pTVar13 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
             *)(*pcVar14)();
  return pTVar13;
}


/* TweenerCore`3[UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions]
   DOLocalPath(Rigidbody, Path, Single, PathMode) */

TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
* Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics::DOTweenModulePhysics_DOLocalPath_1
            (Rigidbody *target,Path *path,float duration,PathMode__Enum pathMode,MethodInfo *method)

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
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass10_0___DOLocalPath_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass10_0___DOLocalPath_b__1_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass10_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(Rigidbody **)(lVar1 + 0x18) = target;
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
                    MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass10_0___DOLocalPath_b__0__
                   );
      uVar10 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
      FUN_?(uVar10,lVar1,
                    MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass10_0___DOLocalPath_b__1_UnityEngine__Vector3_
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
        (pTVar11->fields).plugOptions.isRigidbody = 1;
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


/* TweenerCore`3[UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions]
   DOLookAt(Rigidbody, Vector3, Single, AxisConstraint, Nullable`1[UnityEngine.Vector3]) */

TweenerCore_3_UnityEngine_Quaternion_UnityEngine_Vector3_DG_Tweening_Plugins_Options_QuaternionOptions_
* Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics::DOTweenModulePhysics_DOLookAt
            (Rigidbody *target,Vector3 *towards,float duration,AxisConstraint__Enum axisConstraint,
            Nullable_1_UnityEngine_Vector3_ *up,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Quaternion>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Quaternion>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>_MethodInfo__DG__Tweening__Core__Extensions__SetSpecialStartupMode<DG::Tweening::Core::TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>__DG__Tweening__Core__Enums__SpecialStartupMode_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Vector3>__get_HasValue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Nullable<UnityEngine::Vector3>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Rigidbody__MoveRotation_UnityEngine__Quaternion_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass5_0___DOLookAt_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass5_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(Rigidbody **)(lVar1 + 0x10) = target;
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
    getter = (DOGetter_1_UnityEngine_Quaternion_ *)
             FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Quaternion>);
    FUN_?(getter,lVar1,
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass5_0___DOLookAt_b__0__
                 );
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
    setter = (DOSetter_1_UnityEngine_Quaternion_ *)
             FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Quaternion>);
    FUN_?(setter,uVar7);
    if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
      FUN_?();
    }
    aVStack_8[0].x = towards->x;
    aVStack_8[0].y = towards->y;
    aVStack_8[0].z = towards->z;
    pTVar9 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_5
                       (getter,setter,aVStack_8,duration,(MethodInfo *)0x0);
    pTVar9 = (TweenerCore_3_UnityEngine_Quaternion_UnityEngine_Vector3_DG_Tweening_Plugins_Options_QuaternionOptions_
              *)DOTween.dll::DG::Tweening::TweenSettingsExtensions::
                TweenSettingsExtensions_SetTarget
                          ((Object *)pTVar9,*(Object **)(lVar1 + 0x10),
                           DG__Tweening__Core__TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>__System__Object_
                          );
    if (pTVar9 != (TweenerCore_3_UnityEngine_Quaternion_UnityEngine_Vector3_DG_Tweening_Plugins_Options_QuaternionOptions_
                   *)0x0) {
      (pTVar9->fields)._._.specialStartupMode = 1;
      (pTVar9->fields).plugOptions.axisConstraint = axisConstraint;
      if (up->hasValue == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar7._0_4_ = (pVVar10->upVector).x;
        uVar7._4_4_ = (pVVar10->upVector).y;
        fVar11 = (pVVar10->upVector).z;
      }
      else {
        uVar7._0_4_ = (up->value).x;
        uVar7._4_4_ = (up->value).y;
        fVar11 = (up->value).z;
      }
      (pTVar9->fields).plugOptions.up.x = (float)(int)uVar7;
      (pTVar9->fields).plugOptions.up.y = (float)(int)((ulonglong)uVar7 >> 0x20);
      (pTVar9->fields).plugOptions.up.z = fVar11;
      return pTVar9;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  pTVar9 = (TweenerCore_3_UnityEngine_Quaternion_UnityEngine_Vector3_DG_Tweening_Plugins_Options_QuaternionOptions_
            *)(*pcVar12)();
  return pTVar9;
}


/* TweenerCore`3[UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions]
   DOMove(Rigidbody, Vector3, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics::DOTweenModulePhysics_DOMove
          (Rigidbody *target,Vector3 *endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass0_0___DOMove_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass0_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass0_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Rigidbody **)(lVar1 + 0x10) = target;
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
  getter = (DOGetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass0_0___DOMove_b__0__
               );
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  setter = (DOSetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
  FUN_?(setter,uVar9,MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_)
  ;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  aVStack_10[0].x = endValue->x;
  aVStack_10[0].y = endValue->y;
  aVStack_10[0].z = endValue->z;
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                     (getter,setter,aVStack_10,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions]
   DOMoveX(Rigidbody, Single, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics::DOTweenModulePhysics_DOMoveX
          (Rigidbody *target,float endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass1_0___DOMoveX_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass1_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass1_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Rigidbody **)(lVar1 + 0x10) = target;
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
  getter = (DOGetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass1_0___DOMoveX_b__0__
               );
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  setter = (DOSetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
  FUN_?(setter,uVar9,MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_)
  ;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  aVStack_10[0].z = 0.0;
  aVStack_10[0]._0_8_ = ZEXT48((uint)endValue);
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                     (getter,setter,aVStack_10,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
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


/* TweenerCore`3[UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions]
   DOMoveY(Rigidbody, Single, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics::DOTweenModulePhysics_DOMoveY
          (Rigidbody *target,float endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass2_0___DOMoveY_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass2_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass2_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Rigidbody **)(lVar1 + 0x10) = target;
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
  getter = (DOGetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass2_0___DOMoveY_b__0__
               );
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  setter = (DOSetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
  FUN_?(setter,uVar9,MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_)
  ;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  aVStack_10[0].z = 0.0;
  aVStack_10[0]._0_8_ = (ulonglong)(uint)endValue << 0x20;
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                     (getter,setter,aVStack_10,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
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


/* TweenerCore`3[UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions]
   DOMoveZ(Rigidbody, Single, Single, Boolean) */

TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_ *
Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics::DOTweenModulePhysics_DOMoveZ
          (Rigidbody *target,float endValue,float duration,bool snapping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass3_0___DOMoveZ_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass3_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass3_0);
  if (lVar1 == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
              *)(*pcVar2)();
    return pTVar3;
  }
  bVar4 = iRam_? != 0;
  *(Rigidbody **)(lVar1 + 0x10) = target;
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
  getter = (DOGetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Vector3>);
  FUN_?(getter,lVar1,
                MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass3_0___DOMoveZ_b__0__
               );
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  setter = (DOSetter_1_UnityEngine_Vector3_ *)
           FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
  FUN_?(setter,uVar9,MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_)
  ;
  if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
    FUN_?();
  }
  aVStack_10[0].x = 0.0;
  aVStack_10[0].y = 0.0;
  aVStack_10[0].z = endValue;
  pTVar3 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_4
                     (getter,setter,aVStack_10,duration,(MethodInfo *)0x0);
  if ((pTVar3 != (TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG_Tweening_Plugins_Options_VectorOptions_
                  *)0x0) && ((pTVar3->fields)._._._active_k__BackingField != 0)) {
    (pTVar3->fields).plugOptions.axisConstraint = 8;
    (pTVar3->fields).plugOptions.snapping = snapping;
  }
  DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
            ((Object *)pTVar3,*(Object **)(lVar1 + 0x10),
             DG__Tweening__Tweener_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Tweener>_DG__Tweening__Tweener__System__Object_
            );
  return pTVar3;
}


/* TweenerCore`3[UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions]
   DOPath(Rigidbody, Vector3[], Single, PathType, PathMode, Int32, Nullable`1[UnityEngine.Color]) */

TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
* Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics::DOTweenModulePhysics_DOPath
            (Rigidbody *target,Vector3__Array *path,float duration,PathType__Enum pathType,
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
    FUN_?(&MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_);
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
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass7_0___DOPath_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass7_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(Rigidbody **)(lVar1 + 0x10) = target;
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
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass7_0___DOPath_b__0__
                 );
    uVar9 = *(undefined8 *)(lVar1 + 0x10);
    uVar10 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    FUN_?(uVar10,uVar9,MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_
                 );
    this = (Path *)FUN_?(TypeInfo__DG__Tweening__Plugins__Core__PathCore__Path);
    aNStack_11[0].hasValue = gizmoColor->hasValue;
    aNStack_11[0]._1_3_ = *(undefined3 *)&gizmoColor->field_0x1;
    aNStack_11[0].value.r = (gizmoColor->value).r;
    aNStack_11[0].value.g = (gizmoColor->value).g;
    aNStack_11[0].value.b = (gizmoColor->value).b;
    aNStack_11[0].value.a = (gizmoColor->value).a;
    DOTween.dll::DG::Tweening::Plugins::Core::PathCore::Path::Path__ctor
              (this,pathType,path,subdivisionsXSegment,aNStack_11,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar12 = (Object *)FUN_?(pAVar7,uVar8,uVar10,this,duration);
    pOVar12 = DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
                       (pOVar12,*(Object **)(lVar1 + 0x10),
                        DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__System__Object_
                       );
    pTVar13 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
               *)FUN_?(pOVar12);
    if (pTVar13 !=
        (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
         *)0x0) {
      (pTVar13->fields).plugOptions.isRigidbody = 1;
      (pTVar13->fields).plugOptions.mode = pathMode;
      return pTVar13;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pTVar13 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
             *)(*pcVar14)();
  return pTVar13;
}


/* TweenerCore`3[UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions]
   DOPath(Rigidbody, Path, Single, PathMode) */

TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
* Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics::DOTweenModulePhysics_DOPath_1
            (Rigidbody *target,Path *path,float duration,PathMode__Enum pathMode,MethodInfo *method)

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
    FUN_?(&MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass9_0___DOPath_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass9_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass9_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(Rigidbody **)(lVar1 + 0x10) = target;
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
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass9_0___DOPath_b__0__
                 );
    uVar9 = *(undefined8 *)(lVar1 + 0x10);
    uVar10 = FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Vector3>);
    FUN_?(uVar10,uVar9,MethodInfo__UnityEngine__Rigidbody__MovePosition_UnityEngine__Vector3_
                 );
    if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
      FUN_?();
    }
    t = (Object *)FUN_?(pAVar7,uVar8,uVar10,path,duration);
    pTVar11 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
              *)DOTween.dll::DG::Tweening::TweenSettingsExtensions::
                TweenSettingsExtensions_SetTarget
                          (t,*(Object **)(lVar1 + 0x10),
                           DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Vector3,_DG::Tweening::Plugins::Core::PathCore::Path,_DG::Tweening::Plugins::Options::PathOptions>__System__Object_
                          );
    if (pTVar11 != (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
                   *)0x0) {
      (pTVar11->fields).plugOptions.isRigidbody = 1;
      (pTVar11->fields).plugOptions.mode = pathMode;
      return pTVar11;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  pTVar11 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
            *)(*pcVar12)();
  return pTVar11;
}


/* TweenerCore`3[UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions]
   DORotate(Rigidbody, Vector3, Single, RotateMode) */

TweenerCore_3_UnityEngine_Quaternion_UnityEngine_Vector3_DG_Tweening_Plugins_Options_QuaternionOptions_
* Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics::DOTweenModulePhysics_DORotate
            (Rigidbody *target,Vector3 *endValue,float duration,RotateMode__Enum mode,
            MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Quaternion>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Quaternion>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTween);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Rigidbody__MoveRotation_UnityEngine__Quaternion_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  DG__Tweening__Core__TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass4_0___DORotate_b__0__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass4_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(Rigidbody **)(lVar1 + 0x10) = target;
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
    getter = (DOGetter_1_UnityEngine_Quaternion_ *)
             FUN_?(TypeInfo__DG__Tweening__Core__DOGetter<UnityEngine::Quaternion>);
    FUN_?(getter,lVar1,
                  MethodInfo__DG__Tweening__DOTweenModulePhysics____c__DisplayClass4_0___DORotate_b__0__
                 );
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
    setter = (DOSetter_1_UnityEngine_Quaternion_ *)
             FUN_?(TypeInfo__DG__Tweening__Core__DOSetter<UnityEngine::Quaternion>);
    FUN_?(setter,uVar7);
    if (*(int *)&(TypeInfo__DG__Tweening__DOTween->_1).field_0x1c == 0) {
      FUN_?();
    }
    aVStack_8[0].x = endValue->x;
    aVStack_8[0].y = endValue->y;
    aVStack_8[0].z = endValue->z;
    pTVar9 = DOTween.dll::DG::Tweening::DOTween::DOTween_To_5
                       (getter,setter,aVStack_8,duration,(MethodInfo *)0x0);
    DOTween.dll::DG::Tweening::TweenSettingsExtensions::TweenSettingsExtensions_SetTarget
              ((Object *)pTVar9,*(Object **)(lVar1 + 0x10),
               DG__Tweening__Core__TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>_MethodInfo__DG__Tweening__TweenSettingsExtensions__SetTarget<DG::Tweening::Core::TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>_>_DG__Tweening__Core__TweenerCore<UnityEngine::Quaternion,_UnityEngine::Vector3,_DG::Tweening::Plugins::Options::QuaternionOptions>__System__Object_
              );
    if (pTVar9 != (TweenerCore_3_UnityEngine_Quaternion_UnityEngine_Vector3_DG_Tweening_Plugins_Options_QuaternionOptions_
                   *)0x0) {
      (pTVar9->fields).plugOptions.rotateMode = mode;
      return pTVar9;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pTVar9 = (TweenerCore_3_UnityEngine_Quaternion_UnityEngine_Vector3_DG_Tweening_Plugins_Options_QuaternionOptions_
            *)(*pcVar10)();
  return pTVar9;
}

