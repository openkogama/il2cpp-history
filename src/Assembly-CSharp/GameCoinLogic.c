
/* Void CalculatePosAroundPivot(Vector3, Single, Single) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_CalculatePosAroundPivot
               (GameCoinLogic *this,Vector3 *pivot,float spacingAngle,float distanceFromPivot,
               MethodInfo *method)

{
  uStack_1._0_4_ = pivot->x;
  uStack_1._4_4_ = pivot->y;
  fVar2 = (float)(undefined4)uStack_1 - ((float)(undefined4)uStack_1 + 0.0);
  fVar3 = (float)uStack_1._4_4_ - ((float)uStack_1._4_4_ + 0.0);
  fVar4 = pivot->z - (pivot->z + distanceFromPivot);
  VStack_5._0_8_ = (ulonglong)(uint)(spacingAngle * _UNK_?) << 0x20;
  VStack_5.z = 0.0;
  uStack_6 = 0;
  uStack_7 = 0;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(&VStack_5);
  fVar10 = (float)uStack_7 + (float)uStack_7;
  fVar11 = uStack_6._4_4_ + uStack_6._4_4_;
  fVar12 = ((float)uStack_6 + (float)uStack_6) * (float)uStack_6;
  fVar13 = ((float)uStack_6 + (float)uStack_6) * uStack_7._4_4_;
  uStack_1._0_4_ = pivot->x;
  uStack_1._4_4_ = pivot->y;
  fVar14 = (_UNK_? - (fVar10 * (float)uStack_7 + fVar11 * uStack_6._4_4_)) * fVar2 +
          (fVar11 * (float)uStack_6 - fVar10 * uStack_7._4_4_) * fVar3 +
          (fVar11 * uStack_7._4_4_ + fVar10 * (float)uStack_6) * fVar4 +
          (float)(undefined4)uStack_1;
  fVar15 = (_UNK_? - (fVar10 * (float)uStack_7 + fVar12)) * fVar3 +
          (fVar11 * (float)uStack_6 + fVar10 * uStack_7._4_4_) * fVar2 +
          (fVar10 * uStack_6._4_4_ - fVar13) * fVar4 + (float)uStack_1._4_4_;
  fVar3 = (fVar10 * (float)uStack_6 - fVar11 * uStack_7._4_4_) * fVar2 +
           (fVar13 + fVar10 * uStack_6._4_4_) * fVar3 +
           (_UNK_? - (fVar11 * uStack_6._4_4_ + fVar12)) * fVar4 + pivot->z;
  pCVar16 = (Component *)(this->fields).displayObjectRoot;
  if ((pCVar16 != (Component *)0x0) &&
     (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (pCVar16,(MethodInfo *)0x0), pTVar17 != (Transform *)0x0)) {
    uStack_1 = CONCAT44(fVar15,fVar14);
    fStack_18 = fVar3;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar19 = (pTVar17->fields)._._.m_CachedPtr;
    if (pvVar19 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar19);
    pCVar16 = (Component *)(this->fields).displayObjectRoot;
    if (pCVar16 != (Component *)0x0) {
      pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (pCVar16,(MethodInfo *)0x0);
      this_00 = *(GameObject **)&(this->fields).hasUseWhenFree;
      if ((this_00 != (GameObject *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_5.x = 0.0;
        VStack_5.y = 0.0;
        VStack_5.z = 0.0;
        pvVar19 = (obj->fields)._._.m_CachedPtr;
        if (pvVar19 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar19,&VStack_5);
        uStack_6._0_4_ = pivot->x;
        uStack_6._4_4_ = pivot->y;
        uVar9._0_4_ = (float)uStack_6 + VStack_5.x;
        if (pTVar17 != (Transform *)0x0) {
          uVar9._4_4_ = uStack_6._4_4_ + VStack_5.y;
          VStack_5._0_8_ = uVar9;
          VStack_5.z = pivot->z + VStack_5.z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                    (pTVar17,&VStack_5,(MethodInfo *)0x0);
          pCVar16 = (Component *)(this->fields).displayObjectRoot;
          if ((pCVar16 != (Component *)0x0) &&
             (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 (pCVar16,(MethodInfo *)0x0), pTVar17 != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            VStack_5.x = 0.0;
            VStack_5.y = 0.0;
            VStack_5.z = 0.0;
            pvVar19 = (pTVar17->fields)._._.m_CachedPtr;
            if (pvVar19 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar19);
            uStack_6._0_4_ = (this->fields).displayObjectOffset.y;
            uStack_6._4_4_ = (this->fields).displayObjectOffset.z;
            fStack_18 = *(float *)&(this->fields).displayGO + VStack_5.z;
            uStack_1 = CONCAT44(uStack_6._4_4_ + VStack_5.y,(float)uStack_6 + VStack_5.x);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar19 = (pTVar17->fields)._._.m_CachedPtr;
            if (pvVar19 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar19,&uStack_1);
            return;
          }
        }
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void CreateDisplayObject() */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_CreateDisplayObject
               (GameCoinLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  GameCoinDisplayObject_MethodInfo__UnityEngine__Object__Instantiate<GameCoinDisplayObject>_GameCoinDisplayObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    pGVar2 = (pPVar1->fields).gameCoinDisplayPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar3 = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar2,
                        GameCoinDisplayObject_MethodInfo__UnityEngine__Object__Instantiate<GameCoinDisplayObject>_GameCoinDisplayObject_
                       );
    bVar4 = iRam_? != 0;
    (this->fields).displayObjectRoot = pGVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).displayObjectRoot >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    this_00 = (Component *)(this->fields).displayObjectRoot;
    if (this_00 != (Component *)0x0) {
      pGVar2 = (GameCoinDisplayObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         (this_00,(MethodInfo *)0x0);
      bVar4 = iRam_? != 0;
      (this->fields).displayObject = pGVar2;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).displayObject >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      pGVar2 = (this->fields).displayObject;
      if (pGVar2 != (GameCoinDisplayObject *)0x0) {
        context = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)pGVar2,(MethodInfo *)0x0);
        pGVar3 = *(GameObject **)&(this->fields).hasUseWhenFree;
        if ((pGVar3 != (GameObject *)0x0) &&
           (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar3,(MethodInfo *)0x0), context != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__RectTransform);
            LOCK();
            UNLOCK();
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (context != (Transform *)0x0) {
            pTVar10 = (Transform *)0x0;
            if (context->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
              pTVar10 = context;
            }
            if (pTVar10 != (Transform *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                        ((Object *)StringLiteral_Parent_of_RectTransform_is_being,
                         (Object_1 *)context,(MethodInfo *)0x0);
            }
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                          ,pTVar9,1,0,unaff_RDI);
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (context == (Transform *)0x0) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pvVar12 = (context->fields)._._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)context,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          if (pTVar9 == (Transform *)0x0) {
            pvVar13 = (void *)0x0;
          }
          else {
            pvVar13 = (pTVar9->fields)._._.m_CachedPtr;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar12,pvVar13,1);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void DestroyDisplayObject() */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_DestroyDisplayObject
               (GameCoinLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayObjectRoot;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields).displayObjectRoot;
      if (pGVar1 == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar3 = (Object_1 *)pGVar1[1].monitor;
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
                (pOVar3,0.0,(MethodInfo *)0x0);
      pOVar3 = pGVar1[1].fields._.m_CachedPtr;
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
                (pOVar3,0.0,(MethodInfo *)0x0);
      obj = pGVar1[2].klass;
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
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
      obj_00 = (this->fields).displayObject;
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
                ((Object_1 *)obj_00,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void DestroyRequirement(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_DestroyRequirement
               (GameCoinLogic *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameCoinAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayObjectRoot;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      this_00 = (Component *)(this->fields).displayObjectRoot;
      if (this_00 == (Component *)0x0) goto code_?;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         (this_00,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
    }
  }
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)data,(Object *)StringLiteral_gameCoinAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar3 == (MVGameControllerBase *)0x0) ||
          (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
         (this_01 = (pMVar4->fields)._GameCoinManager_k__BackingField,
         this_01 == (MVGameCoinManager *)0x0)) goto code_?;
      MVGameCoinManager::MVGameCoinManager_ReportPurchaseAmountInEditor
                (this_01,-(this->fields).requirementType,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* UseGUIResult GetCanUseGUIResult() */

UseGUIResult__Enum
Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_GetCanUseGUIResult
          (GameCoinLogic *this,MethodInfo *method)

{
  if ((this->fields).requirementType == 0) {
    return (*(char *)&this[1].klass != '\0') + UseGUIResult__Enum_NoUseButton;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields)._GameCoinManager_k__BackingField,
     this_00 != (MVGameCoinManager *)0x0)) {
    iVar3 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount(this_00,(MethodInfo *)0x0);
    UVar4 = UseGUIResult__Enum_CanAfford;
    if (iVar3 < (this->fields).requirementType) {
      UVar4 = UseGUIResult__Enum_CannotAfford;
    }
    return UVar4;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  UVar4 = (*pcVar5)();
  return UVar4;
}


/* ShowUseOption GetShowOption() */

ShowUseOption__Enum
Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_GetShowOption
          (GameCoinLogic *this,MethodInfo *method)

{
  if ((this->fields).requirementType == 0) {
    return ShowUseOption__Enum_Normal;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields)._GameCoinManager_k__BackingField,
     this_00 != (MVGameCoinManager *)0x0)) {
    iVar3 = MVGameCoinManager::MVGameCoinManager_get_GameCoinAmount(this_00,(MethodInfo *)0x0);
    SVar4 = ShowUseOption__Enum_GameCoinsEnough|ShowUseOption__Enum_UsingGameCoins;
    if (iVar3 < (this->fields).requirementType) {
      SVar4 = ShowUseOption__Enum_GameCoinsInsufficient|ShowUseOption__Enum_UsingGameCoins;
    }
    return SVar4;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  SVar4 = (*pcVar5)();
  return SVar4;
}


/* Boolean IsActive() */

bool Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_IsActive
               (GameCoinLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).displayObject;
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
  if (pGVar1 != (GameCoinDisplayObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    return (pGVar1->fields)._._._._.m_CachedPtr != (void *)0x0;
  }
  return 0;
}


/* Void OnDataUpdate(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_OnDataUpdate
               (GameCoinLogic *this,Dictionary_2_System_Object_System_Object_ *data,int32_t ownerID,
               MethodInfo *method)

{
  uVar1 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,data,CONCAT44(in_register_00000084,ownerID),0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameCoinAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)data,(Object *)StringLiteral_gameCoinAmount,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ->klass->rgctx_data[0x21].method);
  if (-1 < iVar2) {
    iVar3 = (this->fields).requirementType;
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,(Object *)StringLiteral_gameCoinAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar4 == (Object *)0x0) goto code_?;
    if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = cRam_? == '\0';
    (this->fields).requirementType = *(int32_t *)&pOVar4[1].klass;
    if (bVar6) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar7 == (MVGameControllerBase *)0x0) ||
        (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) ||
       (this_00 = (pMVar8->fields)._GameCoinManager_k__BackingField,
       this_00 == (MVGameCoinManager *)0x0)) goto code_?;
    MVGameCoinManager::MVGameCoinManager_ReportPurchaseAmountInEditor
              (this_00,(this->fields).requirementType - iVar3,(MethodInfo *)0x0);
    iVar3 = (this->fields).requirementType;
    if (0 < iVar3) {
      pGVar9 = (this->fields).displayObjectRoot;
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
      if (pGVar9 == (GameObject *)0x0) {
code_?:
        GameCoinLogic_CreateDisplayObject(this,(MethodInfo *)0x0);
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar9->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
      }
      iVar3 = (this->fields).requirementType;
    }
    if (iVar3 == 0) {
      this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      lVar10 = lRam_?;
      pOVar4 = (Object *)0x0;
      IStackX_10.m_value = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar4 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar4 + 1,&IStackX_10,(longlong)*(int *)(lVar10 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar11 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
            puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar13 = *puVar12;
              LOCK();
              uVar14 = *puVar12;
              if (uVar13 == uVar14) {
                *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (uVar13 != uVar14);
          }
        }
      }
      else {
        pOVar4 = (Object *)((ulonglong)uStackX_14 << 0x20);
      }
      if (this_02 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_02,
                 (Object *)StringLiteral_gameCoinAmount,pOVar4,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_03,ownerID,(Dictionary_2_System_Object_System_Object_ *)this_02,
                 (MethodInfo *)0x0);
      pGVar9 = (this->fields).displayObjectRoot;
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
      if (pGVar9 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar9->fields)._.m_CachedPtr != (void *)0x0) {
          GameCoinLogic_DestroyDisplayObject(this,(MethodInfo *)0x0);
        }
      }
    }
  }
  pGVar9 = (this->fields).displayObjectRoot;
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
  if (pGVar9 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar9->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar9 = (this->fields).displayObjectRoot;
      if (pGVar9 != (GameObject *)0x0) {
        iVar3 = (this->fields).requirementType;
        IStackX_10.m_value = iVar3;
        if (cRam_? == '\0') {
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        value = ::StringLiteral__;
        if (0 < iVar3) {
          value = mscorlib.dll::System::Int32::Int32_ToString(&IStackX_10,(MethodInfo *)0x0);
        }
        if ((TextMesh *)pGVar9[1].monitor != (TextMesh *)0x0) {
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    ((TextMesh *)pGVar9[1].monitor,value,(MethodInfo *)0x0);
          this_01 = pGVar9[1].fields._.m_CachedPtr;
          if (this_01 != (TextMesh *)0x0) {
            UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                      (this_01,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}


/* Void PayUseCost() */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_PayUseCost
               (GameCoinLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields)._GameCoinManager_k__BackingField, pMVar3 == (MVGameCoinManager *)0x0
     )) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt,this,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar5._0_4_ = (pMVar3->fields).gameCoins.currentCryptoKey;
  uVar5._4_4_ = (pMVar3->fields).gameCoins.hiddenValue;
  uVar6._0_4_ = (pMVar3->fields).gameCoins.fakeValue;
  uVar6._4_1_ = (pMVar3->fields).gameCoins.inited;
  uVar6._5_3_ = *(undefined3 *)&(pMVar3->fields).gameCoins.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_7[0]._0_8_ = uVar5;
  aOStack_7[0]._8_8_ = uVar6;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_InternalDecrypt(aOStack_7,(MethodInfo *)0x0);
  if (this != (GameCoinLogic *)0x0) {
    if ((this->fields).requirementType <= iVar8) {
      uVar9._0_4_ = (pMVar3->fields).gameCoins.currentCryptoKey;
      uVar9._4_4_ = (pMVar3->fields).gameCoins.hiddenValue;
      uVar10._0_4_ = (pMVar3->fields).gameCoins.fakeValue;
      uVar10._4_1_ = (pMVar3->fields).gameCoins.inited;
      uVar10._5_3_ = *(undefined3 *)&(pMVar3->fields).gameCoins.field_0xd;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      aOStack_7[0]._0_8_ = uVar9;
      aOStack_7[0]._8_8_ = uVar10;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_InternalDecrypt(aOStack_7,(MethodInfo *)0x0);
      value = iVar8 - (this->fields).requirementType;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aOStack_7[0].currentCryptoKey = 0;
      aOStack_7[0].hiddenValue = 0;
      aOStack_7[0].fakeValue = 0;
      aOStack_7[0].inited = 0;
      aOStack_7[0]._13_3_ = 0;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      aOStack_7[0].inited = 1;
      aOStack_7[0].hiddenValue = iVar8;
      aOStack_7[0].currentCryptoKey =
           TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
      bVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
               ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
      uVar5 = aOStack_7[0]._0_8_;
      iVar12 = 0;
      if (bVar11 != 0) {
        iVar12 = value;
      }
      aOStack_7[0].fakeValue = iVar12;
      uVar6 = aOStack_7[0]._8_8_;
      (pMVar3->fields).gameCoins.currentCryptoKey = aOStack_7[0].currentCryptoKey;
      (pMVar3->fields).gameCoins.hiddenValue = aOStack_7[0].hiddenValue;
      (pMVar3->fields).gameCoins.fakeValue = iVar12;
      (pMVar3->fields).gameCoins.inited = aOStack_7[0].inited;
      *(undefined3 *)&(pMVar3->fields).gameCoins.field_0xd = aOStack_7[0]._13_3_;
      if ((pMVar3->fields).OnGameCoinAmountChange !=
          (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
        pMVar13 = (pMVar3->fields).OnGameCoinAmountChange;
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          aOStack_7[0]._8_8_ = uVar6;
          FUN_?();
        }
        aOStack_7[0]._0_8_ = uVar5;
        aOStack_7[0]._8_8_ = uVar6;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_InternalDecrypt(aOStack_7,(MethodInfo *)0x0);
        (*(pMVar13->fields)._._.invoke_impl)
                  ((pMVar13->fields)._._.method_code,iVar8,(pMVar13->fields)._._.method);
      }
      return;
    }
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAmount(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_SetAmount
               (GameCoinLogic *this,Dictionary_2_System_Object_System_Object_ *data,int32_t ownerID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gameCoinAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)data,(Object *)StringLiteral_gameCoinAmount,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ->klass->rgctx_data[0x21].method);
  if (-1 < iVar1) {
    iVar2 = (this->fields).requirementType;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,(Object *)StringLiteral_gameCoinAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = cRam_? == '\0';
    (this->fields).requirementType = *(int32_t *)&pOVar3[1].klass;
    if (bVar5) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar6 == (MVGameControllerBase *)0x0) ||
        (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
       (this_00 = (pMVar7->fields)._GameCoinManager_k__BackingField,
       this_00 == (MVGameCoinManager *)0x0)) goto code_?;
    MVGameCoinManager::MVGameCoinManager_ReportPurchaseAmountInEditor
              (this_00,(this->fields).requirementType - iVar2,(MethodInfo *)0x0);
    iVar2 = (this->fields).requirementType;
    if (0 < iVar2) {
      pGVar8 = (this->fields).displayObjectRoot;
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
      if (pGVar8 == (GameObject *)0x0) {
code_?:
        GameCoinLogic_CreateDisplayObject(this,(MethodInfo *)0x0);
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar8->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
      }
      iVar2 = (this->fields).requirementType;
    }
    if (iVar2 == 0) {
      this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      lVar9 = lRam_?;
      pOVar3 = (Object *)0x0;
      IStackX_10.m_value = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar3 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar3 + 1,&IStackX_10,(longlong)*(int *)(lVar9 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar10 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
            puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar12 = *puVar11;
              LOCK();
              uVar13 = *puVar11;
              if (uVar12 == uVar13) {
                *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (uVar12 != uVar13);
          }
        }
      }
      else {
        pOVar3 = (Object *)((ulonglong)uStackX_14 << 0x20);
      }
      if (this_02 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_02,
                 (Object *)StringLiteral_gameCoinAmount,pOVar3,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_03 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                (this_03,ownerID,(Dictionary_2_System_Object_System_Object_ *)this_02,
                 (MethodInfo *)0x0);
      pGVar8 = (this->fields).displayObjectRoot;
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
          GameCoinLogic_DestroyDisplayObject(this,(MethodInfo *)0x0);
        }
      }
    }
  }
  pGVar8 = (this->fields).displayObjectRoot;
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
      pGVar8 = (this->fields).displayObjectRoot;
      if (pGVar8 != (GameObject *)0x0) {
        iVar2 = (this->fields).requirementType;
        IStackX_10.m_value = iVar2;
        if (cRam_? == '\0') {
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        value = ::StringLiteral__;
        if (0 < iVar2) {
          value = mscorlib.dll::System::Int32::Int32_ToString(&IStackX_10,(MethodInfo *)0x0);
        }
        if ((TextMesh *)pGVar8[1].monitor != (TextMesh *)0x0) {
          UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                    ((TextMesh *)pGVar8[1].monitor,value,(MethodInfo *)0x0);
          this_01 = pGVar8[1].fields._.m_CachedPtr;
          if (this_01 != (TextMesh *)0x0) {
            UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                      (this_01,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}


/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_SetScale
               (GameCoinLogic *this,Vector3 *scale,MethodInfo *method)

{
  this_00 = (Component *)(this->fields).displayObjectRoot;
  if (this_00 == (Component *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  (this_00,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2._0_4_ = scale->x;
  uStack_2._4_4_ = scale->y;
  fStack_3 = scale->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  return;
}


/* GameCoinLogic(GameObject, Boolean) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic__ctor
               (GameCoinLogic *this,GameObject *root,bool hasUseButtonWhenFree,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).displayObjectOffset.x = 1.4013e-45;
  (this->fields).displayObjectOffset.y = 0.0;
  (this->fields).displayObjectOffset.z = 0.0;
  *(undefined4 *)&(this->fields).displayGO = 0;
  *(bool *)&this[1].klass = hasUseButtonWhenFree;
  *(GameObject **)&(this->fields).hasUseWhenFree = root;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).hasUseWhenFree >> 0xc);
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
  return;
}


/* GameCoinLogic(GameObject, Vector3, Boolean) */

void Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic__ctor_1
               (GameCoinLogic *this,GameObject *root,Vector3 *displayObjectOffset,
               bool hasUseButtonWhenFree,MethodInfo *method)

{
  uVar1 = displayObjectOffset->x;
  fVar2 = displayObjectOffset->y;
  fVar3 = displayObjectOffset->z;
  (this->fields).displayObjectOffset.x = 1.4013e-45;
  *(bool *)&this[1].klass = hasUseButtonWhenFree;
  bVar4 = iRam_? != 0;
  (this->fields).displayObjectOffset.y = (float)uVar1 + 0.0;
  (this->fields).displayObjectOffset.z = fVar2 + 0.0;
  *(float *)&(this->fields).displayGO = fVar3 + 0.0;
  *(GameObject **)&(this->fields).hasUseWhenFree = root;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).hasUseWhenFree >> 0xc);
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
  return;
}


/* GameObject get_GameObject() */

GameObject *
Assembly-CSharp.dll::GameCoinLogic::GameCoinLogic_get_GameObject
          (GameCoinLogic *this,MethodInfo *method)

{
  pGVar1 = (this->fields).displayObjectRoot;
  if (pGVar1 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pGVar1 = (GameObject *)(*pcVar2)();
    return pGVar1;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pGVar1 = (GameObject *)(*pcVar2)();
    return pGVar1;
  }
  pvVar3 = (pGVar1->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pGVar1 = (GameObject *)(*pcVar2)();
    return pGVar1;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    pGVar1 = (GameObject *)(*pcVar2)();
    return pGVar1;
  }
  pcRam_? = pcVar2;
  plVar5 = (longlong *)(*pcRam_?)(pvVar3);
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
  }
  if (plVar5 != (longlong *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    System__Runtime__InteropServices__GCHandle__MethodInfo__Unity__Collections__LowLevel__Unsafe__UnsafeUtility__As<void*,_System::Runtime::InteropServices::GCHandle>_System__IntPtr__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((ulonglong)plVar5 & 1) == 0) {
      lVar7 = *plVar5;
    }
    else {
      lVar7 = FUN_?(plVar5);
    }
    pvVar3 = ((pMVar6->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    if (lVar7 != 0) {
      pGVar1 = (GameObject *)FUN_?(lVar7,pvVar3,in_R8,in_R9,unaff_RDI);
      if (pGVar1 != (GameObject *)0x0) {
        return pGVar1;
      }
      FUN_?(lVar7,pvVar3);
      pcVar2 = (code *)swi(3);
      pGVar1 = (GameObject *)(*pcVar2)();
      return pGVar1;
    }
  }
  return (GameObject *)0x0;
}

