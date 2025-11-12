
/* TweenerCore`3[UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions]
   CreateDOTweenPathTween(MonoBehaviour, Boolean, Boolean, Path, Single, PathMode) */

TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
* Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUtils+Physics::
  DOTweenModuleUtils_Physics_CreateDOTweenPathTween
            (MonoBehaviour *target,bool tweenRigidbody,bool isLocal,Path *path,float duration,
            PathMode__Enum pathMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Rigidbody2D_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Rigidbody2D>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Rigidbody_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Rigidbody>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
            *)0x0;
  bVar2 = 0;
  if (tweenRigidbody != 0) {
    if (target == (MonoBehaviour *)0x0) goto code_?;
    target_00 = (Rigidbody *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)target,
                           UnityEngine__Rigidbody_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Rigidbody>__
                          );
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (target_00 != (Rigidbody *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((target_00->fields)._._.m_CachedPtr != (void *)0x0) {
        bVar2 = 1;
        if (isLocal == 0) {
          pTVar1 = DOTweenModulePhysics::DOTweenModulePhysics_DOPath_1
                             (target_00,path,duration,pathMode,(MethodInfo *)0x0);
        }
        else {
          pTVar1 = DOTweenModulePhysics::DOTweenModulePhysics_DOLocalPath_1
                             (target_00,path,duration,pathMode,(MethodInfo *)0x0);
        }
      }
    }
    if ((tweenRigidbody & (bVar2 ^ 1)) != 0) {
      target_01 = (Rigidbody2D *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                            ((Component *)target,
                             UnityEngine__Rigidbody2D_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Rigidbody2D>__
                            );
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (target_01 != (Rigidbody2D *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((target_01->fields)._._.m_CachedPtr != (void *)0x0) {
          if (isLocal != 0) {
            pTVar1 = DOTweenModulePhysics2D::DOTweenModulePhysics2D_DOLocalPath_1
                               (target_01,path,duration,pathMode,(MethodInfo *)0x0);
            return pTVar1;
          }
          pTVar1 = DOTweenModulePhysics2D::DOTweenModulePhysics2D_DOPath_1
                             (target_01,path,duration,pathMode,(MethodInfo *)0x0);
          return pTVar1;
        }
      }
    }
    if (bVar2 != 0) {
      return pTVar1;
    }
  }
  if (target != (MonoBehaviour *)0x0) {
    target_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)target,(MethodInfo *)0x0);
    if (isLocal == 0) {
      pTVar1 = DOTween.dll::DG::Tweening::ShortcutExtensions::ShortcutExtensions_DOPath
                         (target_02,path,duration,pathMode,(MethodInfo *)0x0);
    }
    else {
      pTVar1 = DOTween.dll::DG::Tweening::ShortcutExtensions::ShortcutExtensions_DOLocalPath
                         (target_02,path,duration,pathMode,(MethodInfo *)0x0);
    }
    return pTVar1;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pTVar1 = (TweenerCore_3_UnityEngine_Vector3_DG_Tweening_Plugins_Core_PathCore_Path_DG_Tweening_Plugins_Options_PathOptions_
            *)(*pcVar3)();
  return pTVar1;
}


/* Boolean HasRigidbody(Component) */

bool Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUtils+Physics::
     DOTweenModuleUtils_Physics_HasRigidbody(Component *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Rigidbody_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Rigidbody>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target == (Component *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     (target,
                      UnityEngine__Rigidbody_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Rigidbody>__
                     );
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar3 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return pOVar3[1].klass != (Object__Class *)0x0;
  }
  return 0;
}


/* Boolean HasRigidbody2D(Component) */

bool Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUtils+Physics::
     DOTweenModuleUtils_Physics_HasRigidbody2D(Component *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Rigidbody2D_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Rigidbody2D>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target == (Component *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     (target,
                      UnityEngine__Rigidbody2D_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Rigidbody2D>__
                     );
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar3 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return pOVar3[1].klass != (Object__Class *)0x0;
  }
  return 0;
}


/* Void SetOrientationOnPath(PathOptions, Tween, Quaternion, Transform) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModuleUtils+Physics::
     DOTweenModuleUtils_Physics_SetOrientationOnPath
               (PathOptions *options,Tween *t,Quaternion *newRot,Transform *trans,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Rigidbody);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (options->isRigidbody == 0) {
    if (trans == (Transform *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fStack_2 = newRot->x;
    fStack_3 = newRot->y;
    fStack_4 = newRot->z;
    fStack_5 = newRot->w;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar6 = (trans->fields)._._.m_CachedPtr;
    if (pOVar6 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)trans,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    pcVar7 = pcRam_?;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar1,
       pcVar8 = pcRam_?, pcVar1 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((t == (Tween *)0x0) || (obj = (t->fields).target, obj == (Object *)0x0)) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar10 = (TypeInfo__UnityEngine__Rigidbody->_1).naturalAligment;
    if (((obj->klass->_1).naturalAligment < bVar10) ||
       ((obj->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
        (Il2CppClass *)TypeInfo__UnityEngine__Rigidbody)) {
      FUN_?(obj);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fStack_2 = newRot->x;
    fStack_3 = newRot->y;
    fStack_4 = newRot->z;
    fStack_5 = newRot->w;
    bVar10 = (TypeInfo__UnityEngine__Rigidbody->_1).naturalAligment;
    if (((obj->klass->_1).naturalAligment < bVar10) ||
       ((obj->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
        (Il2CppClass *)TypeInfo__UnityEngine__Rigidbody)) {
      FUN_?(obj);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Rigidbody>_UnityEngine__Rigidbody_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar6 = obj[1].klass;
    if (pOVar6 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = pcRam_?;
    pcVar7 = pcRam_?;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar7 = pcRam_?,
       pcVar8 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcRam_? = pcVar8;
  pcRam_? = pcVar7;
  (*pcVar1)(pOVar6,&fStack_2);
  return;
}

