
/* Void Destroy() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_Destroy(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).inventoryObject == 0) {
    pSVar1 = (this->fields).skybox;
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
    if (pSVar1 != (SkyboxManager *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pSVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pSVar1 = (this->fields).skybox;
        if (pSVar1 == (SkyboxManager *)0x0) {
code_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__List<MVSkybox>__Remove_MVSkybox_)
          ;
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pSVar1->fields).mvSkyboxes;
        if (this_00 == (List_1_MVSkybox_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Remove
                  ((List_1_System_Object_ *)this_00,(Object *)this,
                   MethodInfo__System__Collections__Generic__List<MVSkybox>__Remove_MVSkybox_);
        pSVar1 = (this->fields).skybox;
        if (pSVar1 == (SkyboxManager *)0x0) goto code_?;
        SkyboxManager::SkyboxManager_RefreshColor(pSVar1,(MethodInfo *)0x0);
      }
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
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
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar8 = (this->fields)._._.gameObject;
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
  if (pGVar8 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar8->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar8 = (this->fields)._._.gameObject;
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
                ((Object_1 *)pGVar8,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar9 != (MVGameControllerBase *)0x0) &&
     (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) {
    pRVar11 = (pMVar10->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._.id;
    if (pRVar11 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (HashSet_1_System_Int32Enum_ *)(pRVar11->fields).runtimeDataVariables;
      if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_01,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar12 != 0) {
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar10 == (MVNetworkGame *)0x0) ||
             (pRVar11 = (pMVar10->fields).runtimeVariableNetworkManager,
             pRVar11 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar11,(this->fields)._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_Initialize(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVSkybox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    bVar2 = iRam_? != 0;
    (this->fields).skybox = (pMVar1->fields).skyboxManager;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).skybox >> 0xc);
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
    pSVar7 = (this->fields).skybox;
    if (pSVar7 != (SkyboxManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVSkybox>__Add_MVSkybox_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar8 = (pSVar7->fields)._._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar7,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      cVar11 = (*pcRam_?)(pvVar8);
      if (cVar11 == '\0') {
        (this->fields)._._.interactionFlags = 1;
      }
      pMVar12 = MethodInfo__System__Collections__Generic__List<MVSkybox>__Add_MVSkybox_;
      this_00 = (pSVar7->fields).mvSkyboxes;
      if (this_00 != (List_1_MVSkybox_ *)0x0) {
        piVar13 = &(this_00->fields)._version;
        *piVar13 = *piVar13 + 1;
        pMVar14 = (this_00->fields)._items;
        if (pMVar14 != (MVSkybox__Array *)0x0) {
          uVar3 = (this_00->fields)._size;
          if (uVar3 < (uint)pMVar14->max_length) {
            (this_00->fields)._size = uVar3 + 1;
            FUN_?(pMVar14,(longlong)(int)uVar3,this);
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__AddWithResize
                      ((List_1_System_Object_ *)this_00,(Object *)this,
                       pMVar12->klass->rgctx_data[0xe].method);
          }
          this_01 = (this->fields)._._.gameObject;
          if (this_01 != (GameObject *)0x0) {
            obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_01,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
            if (obj != (Transform *)0x0) {
              uStack_16._0_4_ = (pVVar15->oneVector).x;
              uStack_16._4_4_ = (pVVar15->oneVector).y;
              fStack_17 = (pVVar15->oneVector).z;
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
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(pvVar8,&uStack_16);
              MVLogicObject::MVLogicObject_SetupCulling
                        ((MVLogicObject *)this,(this->fields)._._.gameObject,
                         TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
              this_02 = (Action_2_Int32Enum_Object_ *)
                        FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>)
              ;
              mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
                        (this_02,(Object *)this,
                         MethodInfo__MVSkybox__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                         ,(MethodInfo *)0x0);
              pIVar18 = LogicClientsideFactory::
                        LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                                  ((MVWorldObject *)this,1,
                                   (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                                   (Action_2_LogicInputState_LogicObjectManager_ *)this_02,
                                   (MethodInfo *)0x0);
              bVar2 = iRam_? != 0;
              (this->fields)._InputSignalReceiver_k__BackingField = pIVar18;
              if (bVar2) {
                uVar3 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >>
                               0xc);
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
              pSVar7 = (this->fields).skybox;
              if (pSVar7 != (SkyboxManager *)0x0) {
                SkyboxManager::SkyboxManager_RefreshColor(pSVar7,(MethodInfo *)0x0);
                return;
              }
            }
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_InitializeInventory(MVSkybox *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  (this->fields).inventoryObject = 1;
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_InputStateUpdateCallback
               (MVSkybox *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if ((logicInputState != LogicInputState__Enum_FromColdToHot) &&
     (logicInputState != LogicInputState__Enum_FromHotToCold)) {
    return;
  }
  this_00 = (this->fields).skybox;
  if (this_00 == (SkyboxManager *)0x0) {
    puStackY_30 = &UNK_?;
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_DoAnimate,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this_00->fields).initialized != 0) {
    SkyboxManager::SkyboxManager_ComputeSkyboxSettings
              (this_00,&(this_00->fields).targetColor,&(this_00->fields).targetSunAngle,
               &(this_00->fields).targetFogDensity,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_2
              ((MonoBehaviour *)this_00,StringLiteral_DoAnimate,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_DoAnimate;
    if ((StringLiteral_DoAnimate == (String *)0x0) ||
       ((StringLiteral_DoAnimate->fields)._stringLength == 0)) {
      puStackY_30 = &UNK_?;
      uVar3 = func_?(&TypeInfo__System__NullReferenceException);
      puStackY_30 = &UNK_?;
      this_01 = (NullReferenceException *)func_?(uVar3);
      puStackY_30 = &UNK_?;
      pSVar2 = (String *)func_?(&StringLiteral_methodName_is_null_or_empty);
      puStackY_30 = &UNK_?;
      mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                (this_01,pSVar2,(MethodInfo *)0x0);
      puStackY_30 = &UNK_?;
      uVar3 = func_?(&
                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__String__System__Object_
                                 );
      puStackY_30 = &UNK_?;
      FUN_?(this_01,uVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puStackY_30 = &UNK_?;
    puStackX_8 = unaff_RBX;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this_00,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      puStackY_30 = &UNK_?;
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      puStackY_30 = &UNK_?;
      this_02 = (InvalidEnumArgumentException *)func_?(uVar3);
      puStackY_30 = &UNK_?;
      pSVar2 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
      puStackY_30 = &UNK_?;
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_02,pSVar2,(MethodInfo *)0x0);
      puStackY_30 = &UNK_?;
      uVar3 = func_?(&
                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__String__System__Object_
                                 );
      puStackY_30 = &UNK_?;
      FUN_?(this_02,uVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puStackX_10 = puStackX_8;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                    ,pSVar2,0,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    puStackX_8 = (uint16_t *)0x0;
    puStackY_38 = (uint16_t *)0x0;
    puStackY_30 = (undefined *)0x0;
    uStackY_28 = 0;
    ppuStackY_20 = &puStackX_8;
    if (this_00 != (SkyboxManager *)0x0) {
      pvVar5 = (this_00->fields)._._._._.m_CachedPtr;
      if (pvVar5 != (void *)0x0) {
        if (pSVar2 != (String *)0x0) {
          if ((pSVar2->fields)._stringLength == 0) {
            puStackY_38 = (uint16_t *)0x1;
            puStackY_30 = (undefined *)0x0;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            iVar6 = (pSVar2->fields)._stringLength;
            puStackX_8 = &(pSVar2->fields)._firstChar;
            if (iVar6 == 0) {
              puStackX_8 = (uint16_t *)0x0;
            }
            puStackY_30 = (undefined *)CONCAT44(puStackY_30._4_4_,iVar6);
            puStackY_38 = puStackX_8;
          }
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? != (code *)0x0) ||
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 != (code *)0x0)) {
          pcRam_? = pcVar1;
          (*pcRam_?)(pvVar5,&puStackY_38,0);
          return;
        }
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    }
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_Reset(MVSkybox *this,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 == (SkyboxManager *)0x0) {
    puStackY_30 = &UNK_?;
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_DoAnimate,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this_00->fields).initialized != 0) {
    SkyboxManager::SkyboxManager_ComputeSkyboxSettings
              (this_00,&(this_00->fields).targetColor,&(this_00->fields).targetSunAngle,
               &(this_00->fields).targetFogDensity,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_2
              ((MonoBehaviour *)this_00,StringLiteral_DoAnimate,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_DoAnimate;
    if ((StringLiteral_DoAnimate == (String *)0x0) ||
       ((StringLiteral_DoAnimate->fields)._stringLength == 0)) {
      puStackY_30 = &UNK_?;
      uVar3 = func_?(&TypeInfo__System__NullReferenceException);
      puStackY_30 = &UNK_?;
      this_01 = (NullReferenceException *)func_?(uVar3);
      puStackY_30 = &UNK_?;
      pSVar2 = (String *)func_?(&StringLiteral_methodName_is_null_or_empty);
      puStackY_30 = &UNK_?;
      mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                (this_01,pSVar2,(MethodInfo *)0x0);
      puStackY_30 = &UNK_?;
      uVar3 = func_?(&
                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__String__System__Object_
                                 );
      puStackY_30 = &UNK_?;
      FUN_?(this_01,uVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puStackY_30 = &UNK_?;
    puStackX_8 = unaff_RBX;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this_00,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      puStackY_30 = &UNK_?;
      uVar3 = func_?(&TypeInfo__System__ArgumentException);
      puStackY_30 = &UNK_?;
      this_02 = (InvalidEnumArgumentException *)func_?(uVar3);
      puStackY_30 = &UNK_?;
      pSVar2 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
      puStackY_30 = &UNK_?;
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_02,pSVar2,(MethodInfo *)0x0);
      puStackY_30 = &UNK_?;
      uVar3 = func_?(&
                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__String__System__Object_
                                 );
      puStackY_30 = &UNK_?;
      FUN_?(this_02,uVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puStackX_10 = puStackX_8;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                    ,pSVar2,0,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    puStackX_8 = (uint16_t *)0x0;
    puStackY_38 = (uint16_t *)0x0;
    puStackY_30 = (undefined *)0x0;
    uStackY_28 = 0;
    ppuStackY_20 = &puStackX_8;
    if (this_00 != (SkyboxManager *)0x0) {
      pvVar5 = (this_00->fields)._._._._.m_CachedPtr;
      if (pvVar5 != (void *)0x0) {
        if (pSVar2 != (String *)0x0) {
          if ((pSVar2->fields)._stringLength == 0) {
            puStackY_38 = (uint16_t *)0x1;
            puStackY_30 = (undefined *)0x0;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            iVar6 = (pSVar2->fields)._stringLength;
            puStackX_8 = &(pSVar2->fields)._firstChar;
            if (iVar6 == 0) {
              puStackX_8 = (uint16_t *)0x0;
            }
            puStackY_30 = (undefined *)CONCAT44(puStackY_30._4_4_,iVar6);
            puStackY_38 = puStackX_8;
          }
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? != (code *)0x0) ||
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 != (code *)0x0)) {
          pcRam_? = pcVar1;
          (*pcRam_?)(pvVar5,&puStackY_38,0);
          return;
        }
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    }
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


/* Void SetDefaultInteractionFlags() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_SetDefaultInteractionFlags
               (MVSkybox *this,MethodInfo *method)

{
  (this->fields)._._.interactionFlags = (this->fields).defaultInteractionFlags;
  return;
}


/* Void SetDeleteOnlyInteractionFlags() */

void Assembly-CSharp.dll::MVSkybox::MVSkybox_SetDeleteOnlyInteractionFlags
               (MVSkybox *this,MethodInfo *method)

{
  (this->fields)._._.interactionFlags = 1;
  return;
}


/* MVSkybox(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSkybox::MVSkybox__ctor
               (MVSkybox *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvSkyboxPrefab,worldObjects,
               (MethodInfo *)0x0);
    uVar2 = (this->fields)._._.interactionFlags | 0x18000;
    (this->fields)._._.interactionFlags = uVar2;
    (this->fields).defaultInteractionFlags = uVar2;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Single get_FogDensity() */

float Assembly-CSharp.dll::MVSkybox::MVSkybox_get_FogDensity(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Skybox_data_does_not_contain_fog);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fogDensity);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_fogDensity,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_fog,(MethodInfo *)0x0);
      return _UNK_?;
    }
    this_01 = (this->fields)._._._.data;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_fogDensity,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          return *(float *)&pOVar2[1].klass;
        }
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        fVar4 = (float)(*pcVar3)();
        return fVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}


/* Boolean get_SkyboxActive() */

bool Assembly-CSharp.dll::MVSkybox::MVSkybox_get_SkyboxActive(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._InputSignalReceiver_k__BackingField;
  if (pIVar1 != (IInputSignalReceiver *)0x0) {
    uVar2 = 0;
    pIVar3 = pIVar1->klass;
    uVar4._0_1_ = (pIVar3->_1).rank;
    uVar4._1_1_ = (pIVar3->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar3->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__IInputSignalReceiver) {
          pVVar5 = &(pIVar3->vtable).UpdateSignal + (pIVar3->interfaceOffsets[uVar2].offset + 1);
          UNRECOVERED_JUMPTABLE = pVVar5->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          bVar6 = (*UNRECOVERED_JUMPTABLE)(pIVar1,pVVar5->method,UNRECOVERED_JUMPTABLE);
          return bVar6;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    puVar7 = (undefined8 *)FUN_?(pIVar1);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar6 = (*(code *)*puVar7)(pIVar1,puVar7[1],(code *)*puVar7);
    return bVar6;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar6 = (*pcVar8)();
  return bVar6;
}


/* Color get_SkyboxColor() */

Color * Assembly-CSharp.dll::MVSkybox::MVSkybox_get_SkyboxColor
                  (Color *__return_storage_ptr__,MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SkyboxManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_color);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Skybox_data_does_not_contain_col);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_color,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_col,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__SkyboxManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SkyboxManager);
      }
      pSVar2 = TypeInfo__SkyboxManager->static_fields;
      fVar3 = (pSVar2->defaultColor).g;
      fVar4 = (pSVar2->defaultColor).b;
      fVar5 = (pSVar2->defaultColor).a;
      __return_storage_ptr__->r = (pSVar2->defaultColor).r;
      __return_storage_ptr__->g = fVar3;
      __return_storage_ptr__->b = fVar4;
      __return_storage_ptr__->a = fVar5;
      return __return_storage_ptr__;
    }
    this_01 = (this->fields)._._._.data;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_color,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      pSVar7 = TypeInfo__System__Single;
      if (pOVar6 != (Object *)0x0) {
        lVar8 = FUN_?(pOVar6,TypeInfo__System__Single);
        if (lVar8 == 0) {
          FUN_?(pOVar6,pSVar7);
          pcVar9 = (code *)swi(3);
          pCVar10 = (Color *)(*pcVar9)();
          return pCVar10;
        }
        if (((*(int *)(lVar8 + 0x18) != 0) &&
            (fVar3 = *(float *)(lVar8 + 0x20), 1 < *(uint *)(lVar8 + 0x18))) &&
           (fVar4 = *(float *)(lVar8 + 0x24), 2 < *(uint *)(lVar8 + 0x18))) {
          __return_storage_ptr__->b = *(float *)(lVar8 + 0x28);
          __return_storage_ptr__->r = fVar3;
          __return_storage_ptr__->g = fVar4;
          __return_storage_ptr__->a = 1.0;
          return __return_storage_ptr__;
        }
        FUN_?();
        pcVar9 = (code *)swi(3);
        pCVar10 = (Color *)(*pcVar9)();
        return pCVar10;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pCVar10 = (Color *)(*pcVar9)();
  return pCVar10;
}


/* Single get_SunAngle() */

float Assembly-CSharp.dll::MVSkybox::MVSkybox_get_SunAngle(MVSkybox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Skybox_data_does_not_contain_sun);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sunAngle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_sunAngle,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Skybox_data_does_not_contain_sun,(MethodInfo *)0x0);
      return _UNK_?;
    }
    this_01 = (this->fields)._._._.data;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_sunAngle,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          return *(float *)&pOVar2[1].klass;
        }
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        fVar4 = (float)(*pcVar3)();
        return fVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float)(*pcVar3)();
  return fVar4;
}

