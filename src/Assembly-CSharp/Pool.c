
/* Void Initialize(Transform) */

void Assembly-CSharp.dll::Pool::Pool_Initialize(Pool *this,Transform *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__MonoBehaviour);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).parent = parent;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).parent >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar6 = (MonoBehaviour__Array *)
           FUN_?(TypeInfo__UnityEngine__MonoBehaviour,(this->fields).poolSize);
  bVar1 = iRam_? != 0;
  (this->fields).pool = pMVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).pool >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  iVar7 = (this->fields).poolSize;
  pLVar8 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar8,iVar7,MethodInfo__System__Collections__Generic__List<int>__List_int_);
  bVar1 = iRam_? != 0;
  (this->fields).available = pLVar8;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).available >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  item = 0;
  if (0 < (this->fields).poolSize) {
    lVar3 = 0x20;
    do {
      pMVar6 = (this->fields).pool;
      original = (this->fields).prefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                          );
      if (pMVar6 == (MonoBehaviour__Array *)0x0) goto DAT_?;
      if ((pOVar9 != (Object *)0x0) &&
         (lVar10 = FUN_?(pOVar9,(pMVar6->klass->_0).element_class), lVar10 == 0)) {
        uVar11 = FUN_?();
        FUN_?(uVar11,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((UInt32Enum__Enum)pMVar6->max_length <= item) {
code_?:
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      bVar1 = iRam_? != 0;
      *(Object **)((longlong)pMVar6->vector + lVar3 + -0x20) = pOVar9;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)(pMVar6->vector + (int)item) >> 0xc);
        lVar10 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar10 + 0xADDR);
          puVar5 = (ulonglong *)(lVar10 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pMVar13 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
      this_00 = (List_1_System_UInt32Enum_ *)(this->fields).available;
      if (this_00 == (List_1_System_UInt32Enum_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      piVar14 = &(this_00->fields)._version;
      *piVar14 = *piVar14 + 1;
      pUVar15 = (this_00->fields)._items;
      if (pUVar15 == (UInt32Enum__Enum__Array *)0x0) goto DAT_?;
      uVar2 = (this_00->fields)._size;
      if (uVar2 < (uint)pUVar15->max_length) {
        (this_00->fields)._size = uVar2 + 1;
        if ((uint)pUVar15->max_length <= uVar2) goto code_?;
        pUVar15->vector[(int)uVar2] = item;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__AddWithResize(this_00,item,pMVar13->klass->rgctx_data[0xe].method);
      }
      pMVar6 = (this->fields).pool;
      if (pMVar6 == (MonoBehaviour__Array *)0x0) goto DAT_?;
      if ((UInt32Enum__Enum)pMVar6->max_length <= item) goto code_?;
      pOVar9 = *(Object **)((longlong)pMVar6->vector + lVar3 + -0x20);
      if (pOVar9 == (Object *)0x0) goto DAT_?;
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
      pOVar16 = pOVar9[1].klass;
      if (pOVar16 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar9,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      pvVar17 = (void *)(*pcRam_?)(pOVar16);
      pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar17,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                          );
      if (pOVar9 == (Object *)0x0) goto DAT_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar16 = pOVar9[1].klass;
      if (pOVar16 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar9,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(pOVar16);
      pMVar6 = (this->fields).pool;
      if (pMVar6 == (MonoBehaviour__Array *)0x0) goto DAT_?;
      if ((UInt32Enum__Enum)pMVar6->max_length <= item) goto code_?;
      pOVar9 = *(Object **)((longlong)pMVar6->vector + lVar3 + -0x20);
      if (pOVar9 == (Object *)0x0) goto DAT_?;
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
      pOVar16 = pOVar9[1].klass;
      if (pOVar16 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar9,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pcRam_? = pcVar12;
      pvVar17 = (void *)(*pcRam_?)(pOVar16);
      this_01 = (Transform *)
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar17,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
      if (this_01 == (Transform *)0x0) goto DAT_?;
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
      pTVar18 = (Transform *)0x0;
      if (this_01->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar18 = this_01;
      }
      if (pTVar18 != (Transform *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning_1
                  ((Object *)StringLiteral_Parent_of_RectTransform_is_being,(Object_1 *)this_01,
                   (MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,parent,1,(MethodInfo *)0x0);
      item = item + 1;
      lVar3 = lVar3 + 8;
    } while ((int)item < (this->fields).poolSize);
  }
  return;
}


/* Object Instantiate[Object]() */

Object * Assembly-CSharp.dll::Pool::Pool_Instantiate(Pool *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  pMVar1 = Pool_get_Next(this,(MethodInfo *)0x0);
  lVar2 = *(longlong *)(method->field7_0x38).methodMetadataHandle;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_?(lVar2);
  }
  if (pMVar1 != (MonoBehaviour *)0x0) {
    pMVar3 = pMVar1->klass;
    cVar4 = FUN_?(lVar2,pMVar3,in_R8,in_R9,unaff_RDI);
    if (cVar4 != '\0') {
      return (Object *)pMVar1;
    }
    if (((pMVar3->_1).field_0x6e & 0x10) != 0) {
      if (((((*(byte *)(lVar2 + 0x118) & 0x20) != 0) || (*(char *)(lVar2 + 0x2a) == '\x13')) ||
          (*(char *)(lVar2 + 0x2a) == '\x1e')) &&
         (((*(longlong *)(lVar2 + 0x70) != 0 &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x70) + 0x28) != 0)) &&
          (lVar5 = FUN_?(pMVar1), lVar5 != 0)))) {
        return (Object *)pMVar1;
      }
      pMVar6 = (MonoBehaviour *)0x0;
      if (lVar2 == lRam_?) {
        pMVar6 = pMVar1;
      }
      return (Object *)pMVar6;
    }
  }
  return (Object *)0x0;
}


/* Void ReturnObject(MonoBehaviour) */

void Assembly-CSharp.dll::Pool::Pool_ReturnObject(Pool *this,MonoBehaviour *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).pool;
  uVar2 = 0;
  if (pMVar1 != (MonoBehaviour__Array *)0x0) {
    lVar3 = 0x20;
    do {
      if ((int)pMVar1->max_length <= (int)uVar2) {
        if (obj != (MonoBehaviour *)0x0) {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)obj,(MethodInfo *)0x0);
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
                    ((Object_1 *)pGVar4,0.0,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pMVar1 = (this->fields).pool;
      if (pMVar1 == (MonoBehaviour__Array *)0x0) break;
      if ((uint)pMVar1->max_length <= uVar2) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pMVar6 = *(MonoBehaviour **)((longlong)pMVar1->vector + lVar3 + -0x20);
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
      if (obj == (MonoBehaviour *)0x0 && pMVar6 == (MonoBehaviour *)0x0) {
code_?:
        if ((obj != (MonoBehaviour *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)obj,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)obj,(MethodInfo *)0x0);
          if (this_00 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_00,(this->fields).parent,(MethodInfo *)0x0);
            pLVar7 = (this->fields).available;
            if (pLVar7 != (List_1_System_Int32_ *)0x0) {
              FUN_?(pLVar7,uVar2,
                            MethodInfo__System__Collections__Generic__List<int>__Add_int_);
              return;
            }
          }
        }
        break;
      }
      if (obj == (MonoBehaviour *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pMVar6 == (MonoBehaviour *)0x0) break;
        bVar8 = (pMVar6->fields)._._._.m_CachedPtr == (void *)0x0;
      }
      else if (pMVar6 == (MonoBehaviour *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar8 = (obj->fields)._._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar8 = pMVar6 == obj;
      }
      if (bVar8) goto code_?;
      pMVar1 = (this->fields).pool;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pMVar1 != (MonoBehaviour__Array *)0x0);
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MonoBehaviour get_Next() */

MonoBehaviour * Assembly-CSharp.dll::Pool::Pool_get_Next(Pool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).available;
  if (pLVar1 != (List_1_System_Int32_ *)0x0) {
    if ((pLVar1->fields)._size < 1) {
      pMVar2 = (this->fields).prefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar3 = 
      UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
      ;
      if ((
          UnityEngine__MonoBehaviour_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_The_Object_you_want_to_instantia);
        LOCK();
        UNLOCK();
        if ((pMVar3->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar3);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar4 = StringLiteral_The_Object_you_want_to_instantia;
      if (pMVar2 != (MonoBehaviour *)0x0) {
        pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Internal_CloneSingle
                            ((Object_1 *)pMVar2,(MethodInfo *)0x0);
        pvVar6 = ((pMVar3->field7_0x38).rgctx_data)->rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
          pvVar6 = (void *)FUN_?(pvVar6);
        }
        if (pOVar5 == (Object_1 *)0x0) {
          pMVar2 = (MonoBehaviour *)0x0;
        }
        else {
          pMVar2 = (MonoBehaviour *)FUN_?(pOVar5,pvVar6);
          if (pMVar2 == (MonoBehaviour *)0x0) {
            FUN_?(pOVar5,pvVar6);
            pcVar7 = (code *)swi(3);
            pMVar2 = (MonoBehaviour *)(*pcVar7)();
            return pMVar2;
          }
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
        if (pMVar2 != (MonoBehaviour *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pMVar2->fields)._._._.m_CachedPtr != (void *)0x0) {
            return pMVar2;
          }
        }
        uVar8 = func_?(&TypeInfo__UnityEngine__UnityException);
        this_02 = (UnityException *)func_?(uVar8);
        pSVar4 = (String *)func_?(&StringLiteral_Instantiate_failed_because_the_c);
        UnityEngine.CoreModule.dll::UnityEngine::UnityException::UnityException__ctor_1
                  (this_02,pSVar4,(MethodInfo *)0x0);
        FUN_?(this_02,pMVar3);
        pcVar7 = (code *)swi(3);
        pMVar2 = (MonoBehaviour *)(*pcVar7)();
        return pMVar2;
      }
      uVar8 = func_?(&TypeInfo__System__ArgumentException);
      this_01 = (InvalidEnumArgumentException *)func_?(uVar8);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_01,pSVar4,(MethodInfo *)0x0);
      uVar8 = func_?(&
                                   MethodInfo__UnityEngine__Object__CheckNullArgument_System__Object__System__String_
                                  );
      FUN_?(this_01,uVar8);
      pcVar7 = (code *)swi(3);
      pMVar2 = (MonoBehaviour *)(*pcVar7)();
      return pMVar2;
    }
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar9 = (this->fields).available;
    if ((pLVar9 != (List_1_System_Int32_ *)0x0) && (pLVar1 != (List_1_System_Int32_ *)0x0)) {
      iVar10 = (pLVar9->fields)._size;
      if ((uint)(pLVar1->fields)._size <= iVar10 - 1U) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        pMVar2 = (MonoBehaviour *)(*pcVar7)();
        return pMVar2;
      }
      pIVar11 = (pLVar1->fields)._items;
      if (pIVar11 != (Int32__Array *)0x0) {
        if ((uint)pIVar11->max_length <= iVar10 - 1U) goto code_?;
        uVar12 = pIVar11->vector[(longlong)iVar10 + -1];
        pLVar1 = (this->fields).available;
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar9 = (this->fields).available;
        if (pLVar9 != (List_1_System_Int32_ *)0x0) {
          iVar10 = (pLVar9->fields)._size;
          destinationIndex = iVar10 - 1;
          if ((uint)(pLVar1->fields)._size <= destinationIndex) goto code_?;
          iVar13 = (pLVar1->fields)._size + -1;
          (pLVar1->fields)._size = iVar13;
          if ((int)destinationIndex < iVar13) {
            pIVar11 = (pLVar1->fields)._items;
            mscorlib.dll::System::Array::Array_Copy_3
                      ((Array *)pIVar11,iVar10,(Array *)pIVar11,destinationIndex,
                       iVar13 - destinationIndex,(MethodInfo *)0x0);
          }
          piVar14 = &(pLVar1->fields)._version;
          *piVar14 = *piVar14 + 1;
          pMVar15 = (this->fields).pool;
          if (pMVar15 != (MonoBehaviour__Array *)0x0) {
            if ((uint)pMVar15->max_length <= uVar12) {
code_?:
              FUN_?();
              pcVar7 = (code *)swi(3);
              pMVar2 = (MonoBehaviour *)(*pcVar7)();
              return pMVar2;
            }
            if (pMVar15->vector[(int)uVar12] != (MonoBehaviour *)0x0) {
              this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pMVar15->vector[(int)uVar12],(MethodInfo *)0x0);
              if (this_00 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_00,1,(MethodInfo *)0x0);
                pMVar15 = (this->fields).pool;
                if (pMVar15 != (MonoBehaviour__Array *)0x0) {
                  if (uVar12 < (uint)pMVar15->max_length) {
                    return pMVar15->vector[(int)uVar12];
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pMVar2 = (MonoBehaviour *)(*pcVar7)();
  return pMVar2;
}


/* Int32 get_ObjectsAvailable() */

int32_t Assembly-CSharp.dll::Pool::Pool_get_ObjectsAvailable(Pool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).available;
  if (pLVar1 != (List_1_System_Int32_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void set_Return(MonoBehaviour) */

void Assembly-CSharp.dll::Pool::Pool_set_Return(Pool *this,MonoBehaviour *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).pool;
  uVar2 = 0;
  if (pMVar1 != (MonoBehaviour__Array *)0x0) {
    lVar3 = 0x20;
    do {
      if ((int)pMVar1->max_length <= (int)uVar2) {
        if (value != (MonoBehaviour *)0x0) {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)value,(MethodInfo *)0x0);
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
                    ((Object_1 *)pGVar4,0.0,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pMVar1 = (this->fields).pool;
      if (pMVar1 == (MonoBehaviour__Array *)0x0) break;
      if ((uint)pMVar1->max_length <= uVar2) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pMVar6 = *(MonoBehaviour **)((longlong)pMVar1->vector + lVar3 + -0x20);
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
      if (value == (MonoBehaviour *)0x0 && pMVar6 == (MonoBehaviour *)0x0) {
code_?:
        if ((value != (MonoBehaviour *)0x0) &&
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)value,(MethodInfo *)0x0), pGVar4 != (GameObject *)0x0))
        {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,0,(MethodInfo *)0x0);
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)value,(MethodInfo *)0x0);
          if (this_00 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_00,(this->fields).parent,(MethodInfo *)0x0);
            pLVar7 = (this->fields).available;
            if (pLVar7 != (List_1_System_Int32_ *)0x0) {
              FUN_?(pLVar7,uVar2,
                            MethodInfo__System__Collections__Generic__List<int>__Add_int_);
              return;
            }
          }
        }
        break;
      }
      if (value == (MonoBehaviour *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pMVar6 == (MonoBehaviour *)0x0) break;
        bVar8 = (pMVar6->fields)._._._.m_CachedPtr == (void *)0x0;
      }
      else if (pMVar6 == (MonoBehaviour *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar8 = (value->fields)._._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar8 = pMVar6 == value;
      }
      if (bVar8) goto code_?;
      pMVar1 = (this->fields).pool;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pMVar1 != (MonoBehaviour__Array *)0x0);
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

