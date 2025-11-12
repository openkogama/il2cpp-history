
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_Awake
               (PickupItemEditable *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).Initialize.methodPtr)(this,(this->klass->vtable).Initialize.method);
  return;
}


/* Void DisableAnimation() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_DisableAnimation
               (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animator;
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
  if (pAVar1 != (Animator *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).animator;
      if (pAVar1 == (Animator *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pAVar1,0,(MethodInfo *)0x0);
      obj = (this->fields).weaponParent;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fStack_4 = (pQVar3->identityQuaternion).x;
      fStack_5 = (pQVar3->identityQuaternion).y;
      fStack_6 = (pQVar3->identityQuaternion).z;
      fStack_7 = (pQVar3->identityQuaternion).w;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar8 = (obj->fields)._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar8,&fStack_4);
    }
  }
  return;
}


/* IEnumerator DisableAnimatorCoroutine() */

IEnumerator *
Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_DisableAnimatorCoroutine
          (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__39);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__39);
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


/* Void Initialize() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_Initialize
               (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MainCameraManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FirstPersonTransform);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  (this->fields).hitLayerMask = 1 << ((byte)iVar1 & 0x1f) | 1 << (uVar2 & 0x1f);
  if (*(int *)&(TypeInfo__MainCameraManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson == 0) {
code_?:
    (*(this->klass->vtable).__unknown_5.methodPtr)(this,(this->klass->vtable).__unknown_5.method);
    pPVar3 = (PickupItemEditable_EditableItemConfiguration *)
             (*(this->klass->vtable).__unknown_4.methodPtr)
                       (this,(this->klass->vtable).__unknown_4.method);
    bVar4 = iRam_? != 0;
    (this->fields)._Configuration_k__BackingField = pPVar3;
    if (bVar4) {
      uVar2 = (uint)((ulonglong)&(this->fields)._Configuration_k__BackingField >> 0xc);
      lVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar4 = uVar6 == *puVar7;
        if (bVar4) {
          *puVar7 = uVar6 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).SetValuesBasedOnConfiguration.methodPtr)
              (this,(this->klass->vtable).SetValuesBasedOnConfiguration.method);
    return;
  }
  pTVar8 = (this->fields)._._.firstPersonTransform;
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
  if (pTVar8 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar8->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  this_00 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar8 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar8,parent,1,(MethodInfo *)0x0);
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pTVar8 == (Transform *)0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar10 = (pTVar8->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar10);
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0);
      bVar4 = iRam_? != 0;
      (this->fields)._._.firstPersonTransform = pTVar8;
      if (bVar4) {
        uVar2 = (uint)((ulonglong)&(this->fields)._._.firstPersonTransform >> 0xc);
        lVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar4 = uVar6 == *puVar7;
          if (bVar4) {
            *puVar7 = uVar6 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InterruptFire() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_InterruptFire
               (PickupItemEditable *this,MethodInfo *method)

{
  (this->fields)._.isFiring = 0;
  this_00 = (this->fields).fireAudioPlayer;
  if (this_00 == (CustomItemAudioPlayer *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  CustomItemAudioPlayer::CustomItemAudioPlayer_Stop(this_00,(MethodInfo *)0x0);
  if ((this->fields).animatorRoutine != (IEnumerator *)0x0) {
    routine = (this->fields).animatorRoutine;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (this_01 == (MonoBehaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (this_01,routine,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).animatorRoutine = (IEnumerator *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).animatorRoutine >> 0xc);
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
    PickupItemEditable_DisableAnimation(this,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean IsSamePickupItem(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_IsSamePickupItem
               (PickupItemEditable *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeModelId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields)._Configuration_k__BackingField;
  if (pPVar1 == (PickupItemEditable_EditableItemConfiguration *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  IVar4 = (pPVar1->fields).cubeModelId;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  IVar5 = Extensions::Extensions_GetValueOrDefault_2
                    (itemData,StringLiteral_CubeModelId,0xffffffff,
                     int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                    );
  if (IVar4 != IVar5) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar3 = (*(this->klass->vtable).__unknown_2.methodPtr)
                    (this,itemData,(this->klass->vtable).__unknown_2.method);
  return bVar3;
}


/* Void OnCubeModelStateChanged() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnCubeModelStateChanged
               (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pPVar1 = (this->fields)._Configuration_k__BackingField;
  if ((pPVar1 != (PickupItemEditable_EditableItemConfiguration *)0x0) &&
     (this_00 != (MVWorldObjectClientManager *)0x0)) {
    cmb = (MVCubeModelInstance *)
          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                    (this_00,(pPVar1->fields).cubeModelId,(MethodInfo *)0x0);
    if (cmb == (MVCubeModelInstance *)0x0) {
      return;
    }
    pGVar2 = (this->fields).cubeModelObject;
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
    if (pGVar2 != (GameObject *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar2->fields)._.m_CachedPtr != (void *)0x0) {
        pGVar2 = (this->fields).cubeModelObject;
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
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                  ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
        bVar3 = iRam_? != 0;
        (this->fields).cubeModelObject = (GameObject *)0x0;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(this->fields).cubeModelObject >> 0xc);
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
      }
    }
    bVar8 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((cmb->klass->_1).naturalAligment < bVar8) ||
       ((MVCubeModelInstance__Class *)(cmb->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      FUN_?(cmb);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pRVar10 = (cmb->fields)._.prototypeCubeModel;
    if (pRVar10 != (RuntimePrototypeCubeModel *)0x0) {
      (this->fields)._CubeModelPid_k__BackingField = (pRVar10->fields).prototypeId;
      pGVar2 = PickupItem::PickupItem_CloneCubeModelInstance(cmb,1,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).cubeModelObject = pGVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).cubeModelObject >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pGVar2 = (this->fields).cubeModelObject;
      if (pGVar2 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
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
        pvVar11 = (pGVar2->fields)._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        pvVar11 = (void *)(*pcRam_?)(pvVar11);
        this_01 = (Transform *)
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar11,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        if (this_01 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,(this->fields).cubeModelParent,1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
          uStack_14._0_4_ = (pVVar13->zeroVector).x;
          uStack_14._4_4_ = (pVVar13->zeroVector).y;
          fStack_15 = (pVVar13->zeroVector).z;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar11 = (this_01->fields)._._.m_CachedPtr;
          if (pvVar11 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          (*pcRam_?)(pvVar11);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar16 = TypeInfo__UnityEngine__Quaternion->static_fields;
          fStack_17 = (pQVar16->identityQuaternion).x;
          fStack_18 = (pQVar16->identityQuaternion).y;
          fStack_19 = (pQVar16->identityQuaternion).z;
          fStack_20 = (pQVar16->identityQuaternion).w;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar11 = (this_01->fields)._._.m_CachedPtr;
          if (pvVar11 != (void *)0x0) {
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar12 = func_?(&UNK_?);
              FUN_?(uVar12,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pvVar11);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
            uStack_14._0_4_ = (pVVar13->oneVector).x;
            uStack_14._4_4_ = (pVVar13->oneVector).y;
            fStack_15 = (pVVar13->oneVector).z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar11 = (this_01->fields)._._.m_CachedPtr;
            if (pvVar11 != (void *)0x0) {
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar12 = func_?(&UNK_?);
                FUN_?(uVar12,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(pvVar11,&uStack_14);
              return;
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_01,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnEnterVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnEnterVehicleWithWeapon
               (PickupItemEditable *this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).InterruptFire.methodPtr)(this,(this->klass->vtable).InterruptFire.method);
  return;
}


/* Void OnHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnHit
               (PickupItemEditable *this,VoxelHit *voxelHit,Ray *lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IBulletImpactVisualizer);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  uStack_2._0_4_ = (voxelHit->point).x;
  uStack_2._4_4_ = (voxelHit->point).y;
  uStack_3 = *(undefined8 *)&(voxelHit->point).z;
  uStack_4._0_4_ = (voxelHit->normal).y;
  uStack_4._4_4_ = (voxelHit->normal).z;
  uStack_5 = *(undefined8 *)&voxelHit->cubePos;
  pCStack_6 = voxelHit->cube;
  uStack_7 = *(undefined8 *)&voxelHit->distance;
  pCStack_8 = voxelHit->collider;
  pTStack_9 = voxelHit->transform;
  iStack_10 = voxelHit->interactionFlags;
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                   (pMVar1,voxelHit->woId,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,id,(MethodInfo *)0x0);
      lVar12 = FUN_?(pMVar11,TypeInfo__IBulletImpactVisualizer);
      if (lVar12 != 0) {
        pMVar13 = (this->fields)._._.owner;
        if (((pMVar13 == (MVPickupOwner *)0x0) ||
            (pMVar11 = (pMVar13->fields)._.worldObjectParent, pMVar11 == (MVWorldObjectClient *)0x0))
           || (pPVar14 = (this->fields)._Configuration_k__BackingField,
              pPVar14 == (PickupItemEditable_EditableItemConfiguration *)0x0))
        goto code_?;
        uStack_15._0_4_ = (lineOfFire->m_Origin).x;
        uStack_15._4_4_ = (lineOfFire->m_Origin).y;
        uStack_16 = *(undefined8 *)&(lineOfFire->m_Origin).z;
        uStack_17._0_4_ = (lineOfFire->m_Direction).y;
        uStack_17._4_4_ = (lineOfFire->m_Direction).z;
        uStack_2._0_4_ = (voxelHit->point).x;
        uStack_2._4_4_ = (voxelHit->point).y;
        uStack_3 = *(undefined8 *)&(voxelHit->point).z;
        uStack_4._0_4_ = (voxelHit->normal).y;
        uStack_4._4_4_ = (voxelHit->normal).z;
        uStack_5 = *(undefined8 *)&voxelHit->cubePos;
        uStack_18._0_4_ = voxelHit->face;
        uStack_18._4_1_ = voxelHit->isCubeHit;
        uStack_18._5_3_ = *(undefined3 *)&voxelHit->field_0x25;
        uStack_19 = *(undefined8 *)&voxelHit->woId;
        pCStack_6 = voxelHit->cube;
        uStack_7 = *(undefined8 *)&voxelHit->distance;
        pCStack_8 = voxelHit->collider;
        pTStack_9 = voxelHit->transform;
        iStack_10 = voxelHit->interactionFlags;
        FUN_?(pMVar13,TypeInfo__IBulletImpactVisualizer,lVar12,&uStack_2,&uStack_15,
                      (pMVar11->fields)._.ownerActorNr,(pPVar14->fields).damage);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void OnHolstered() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnHolstered
               (PickupItemEditable *this,MethodInfo *method)

{
  (*(this->klass->vtable).TriggerEnd.methodPtr)(this,(this->klass->vtable).TriggerEnd.method);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).InterruptFire.methodPtr)(this,(this->klass->vtable).InterruptFire.method);
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnStateChanged
               (PickupItemEditable *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__Extensions__GetValueOrDefault<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              Extensions::Extensions_GetValueOrDefault_3
                        (newState,StringLiteral_itemData,(Object *)0x0,
                         System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__Extensions__GetValueOrDefault<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                        );
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Extensions);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_CubeModelId);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = (this->fields)._Configuration_k__BackingField;
    if (pPVar1 == (PickupItemEditable_EditableItemConfiguration *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    IVar3 = (pPVar1->fields).cubeModelId;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    IVar4 = Extensions::Extensions_GetValueOrDefault_2
                      (hashtable,StringLiteral_CubeModelId,0xffffffff,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    if ((IVar3 == IVar4) &&
       (cVar5 = (*(this->klass->vtable).__unknown_2.methodPtr)
                          (this,hashtable,(this->klass->vtable).__unknown_2.method), cVar5 != '\0'))
    {
      return;
    }
    (*(this->klass->vtable).InterruptFire.methodPtr)
              (this,(this->klass->vtable).InterruptFire.method);
    (*(this->klass->vtable).__unknown_3.methodPtr)
              (this,hashtable,(this->klass->vtable).__unknown_3.method);
    (*(this->klass->vtable).SetValuesBasedOnConfiguration.methodPtr)
              (this,(this->klass->vtable).SetValuesBasedOnConfiguration.method);
    (*(this->klass->vtable).OnPickupNewEditableItem.methodPtr)
              (this,(this->klass->vtable).OnPickupNewEditableItem.method);
  }
  return;
}


/* Void PlayAnimation() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_PlayAnimation
               (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animator;
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
  if (pAVar1 != (Animator *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).animator;
      if (pAVar1 != (Animator *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pAVar1,1,(MethodInfo *)0x0);
        pAVar1 = (this->fields).animator;
        name = (String *)(*(this->klass->vtable).get_AttackAnimationName.methodPtr)(this);
        if (pAVar1 != (Animator *)0x0) {
          iVar2 = UnityEngine.AnimationModule.dll::UnityEngine::Animator::Animator_StringToHash
                            (name,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Animator>_UnityEngine__Animator_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar3 = (pAVar1->fields)._._._.m_CachedPtr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar3,iVar2,0,0);
          if ((this->fields).animatorRoutine != (IEnumerator *)0x0) {
            Coroutines::Coroutines_Stop((this->fields).animatorRoutine,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__39);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pIVar6 = (IEnumerator *)
                   FUN_?(TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__39);
          iVar7 = iRam_?;
          *(undefined4 *)&pIVar6[1].klass = 0;
          pIVar6[2].klass = (IEnumerator__Class *)this;
          if (iVar7 != 0) {
            uVar8 = (uint)((ulonglong)(pIVar6 + 2) >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar12 = uVar10 == *puVar11;
              if (bVar12) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
              iVar7 = iRam_?;
            } while (!bVar12);
          }
          (this->fields).animatorRoutine = pIVar6;
          if (iVar7 != 0) {
            uVar8 = (uint)((ulonglong)&(this->fields).animatorRoutine >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar12 = uVar10 == *puVar11;
              if (bVar12) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          pIVar6 = (this->fields).animatorRoutine;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__Coroutines);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
          if (this_00 != (MonoBehaviour *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                      (this_00,pIVar6,(MethodInfo *)0x0);
            return;
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}


/* Void SetAnimation() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_SetAnimation
               (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animator;
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
  if (pAVar1 != (Animator *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).animator;
      if (pAVar1 == (Animator *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pRVar3 = UnityEngine.AnimationModule.dll::UnityEngine::Animator::
               Animator_get_runtimeAnimatorController(pAVar1,(MethodInfo *)0x0);
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
      if (pRVar3 != (RuntimeAnimatorController *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pRVar3->fields)._.m_CachedPtr != (void *)0x0) {
          pAVar1 = (this->fields).animator;
          if (((pAVar1 != (Animator *)0x0) &&
              (pRVar3 = UnityEngine.AnimationModule.dll::UnityEngine::Animator::
                        Animator_get_runtimeAnimatorController(pAVar1,(MethodInfo *)0x0),
              pRVar3 != (RuntimeAnimatorController *)0x0)) &&
             (pAVar4 = UnityEngine.AnimationModule.dll::UnityEngine::RuntimeAnimatorController::
                       RuntimeAnimatorController_get_animationClips(pRVar3,(MethodInfo *)0x0),
             pAVar4 != (AnimationClip__Array *)0x0)) {
            if (pAVar4->max_length == 0) {
              return;
            }
            pAVar1 = (this->fields).animator;
            if (((pAVar1 != (Animator *)0x0) &&
                (pRVar3 = UnityEngine.AnimationModule.dll::UnityEngine::Animator::
                          Animator_get_runtimeAnimatorController(pAVar1,(MethodInfo *)0x0),
                pRVar3 != (RuntimeAnimatorController *)0x0)) &&
               (pAVar4 = UnityEngine.AnimationModule.dll::UnityEngine::RuntimeAnimatorController::
                         RuntimeAnimatorController_get_animationClips(pRVar3,(MethodInfo *)0x0),
               pAVar4 != (AnimationClip__Array *)0x0)) {
              if ((int)pAVar4->max_length == 0) {
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              obj = pAVar4->vector[0];
              if (obj != (AnimationClip *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AnimationClip>_UnityEngine__AnimationClip_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar5 = (obj->fields)._._.m_CachedPtr;
                if (pvVar5 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pcVar2 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                  uVar6 = func_?(&UNK_?);
                  FUN_?(uVar6,0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pcRam_? = pcVar2;
                fVar7 = (float)(*pcRam_?)(pvVar5);
                pPVar8 = (this->fields)._Configuration_k__BackingField;
                if ((pPVar8 != (PickupItemEditable_EditableItemConfiguration *)0x0) &&
                   (pAVar1 = (this->fields).animator, pAVar1 != (Animator *)0x0)) {
                  fVar9 = (pPVar8->fields).fireAnimationTime;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Animator>_UnityEngine__Animator_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar5 = (pAVar1->fields)._._._.m_CachedPtr;
                  if (pvVar5 != (void *)0x0) {
                    pcVar2 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                      uVar6 = func_?(&UNK_?);
                      FUN_?(uVar6,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcRam_? = pcVar2;
                    (*pcRam_?)(pvVar5,fVar7 / fVar9);
                    return;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
            }
          }
          goto DAT_?;
        }
      }
    }
  }
  return;
}


/* Void SetValuesBasedOnConfiguration() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_SetValuesBasedOnConfiguration
               (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  PickupItemEditable_OnCubeModelStateChanged(this,(MethodInfo *)0x0);
  (*(this->klass->vtable).SetAnimation.methodPtr)(this,(this->klass->vtable).SetAnimation.method);
  pPVar1 = (this->fields)._Configuration_k__BackingField;
  if (pPVar1 == (PickupItemEditable_EditableItemConfiguration *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pfVar3 = &(pPVar1->fields).fireAnimationTime;
  pfVar4 = &(pPVar1->fields).attackCooldown;
  fVar5 = *pfVar4;
  if (fVar5 < *pfVar3 || fVar5 == *pfVar3) {
    pfVar4 = pfVar3;
  }
  fVar5 = *pfVar4;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aOStack_6[0].fakeValue = 0.0;
  aOStack_6[0].inited = 0;
  aOStack_6[0]._21_3_ = 0;
  aOStack_6[0].currentCryptoKey = 0;
  aOStack_6[0].hiddenValue.b1 = 0;
  aOStack_6[0].hiddenValue.b2 = 0;
  aOStack_6[0].hiddenValue.b3 = 0;
  aOStack_6[0].hiddenValue.b4 = 0;
  aOStack_6[0].hiddenValueOld = (Byte__Array *)0x0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_InternalEncrypt(fVar5,(MethodInfo *)0x0);
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
  ObscuredFloat__ctor(aOStack_6,value,(MethodInfo *)0x0);
  bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar7 != 0) {
    aOStack_6[0].fakeValue = fVar5;
  }
  bVar8 = iRam_? != 0;
  (this->fields)._.fireInterval.currentCryptoKey = aOStack_6[0].currentCryptoKey;
  (this->fields)._.fireInterval.hiddenValue = aOStack_6[0].hiddenValue;
  (this->fields)._.fireInterval.hiddenValueOld = aOStack_6[0].hiddenValueOld;
  (this->fields)._.fireInterval.fakeValue = aOStack_6[0].fakeValue;
  (this->fields)._.fireInterval.inited = aOStack_6[0].inited;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x15 = aOStack_6[0]._21_3_;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(this->fields)._.fireInterval.hiddenValueOld >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* String get_AttackAnimationName() */

String * Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_get_AttackAnimationName
                   (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return ::StringLiteral__;
}


/* String get_FireSoundEffectName() */

String * Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_get_FireSoundEffectName
                   (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return ::StringLiteral__;
}


/* String get_HitSoundEffectName() */

String * Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_get_HitSoundEffectName
                   (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return ::StringLiteral__;
}


/* Void set_CubeModelPid(Int32) */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_set_CubeModelPid
               (PickupItemEditable *this,int32_t value,MethodInfo *method)

{
  (this->fields)._CubeModelPid_k__BackingField = value;
  return;
}

