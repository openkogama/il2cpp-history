
/* Void Awake() */

void Assembly-CSharp.dll::TypePoolManager::TypePoolManager_Awake
               (TypePoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__Dictionary<System::Type,_Pool>_MethodInfo__System__Linq__Enumerable__ToDictionary<Pool,_System::Type>_System__Collections__Generic__IEnumerable<Pool>__System__Func<Pool,_System::Type>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<Pool,_System::Type>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Pool>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Pool>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TypePoolManager____c___Awake_b__2_0_Pool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TypePoolManager____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pool;
  uVar2 = 0;
  if (pLVar1 != (List_1_Pool_ *)0x0) {
    lVar3 = 0x20;
    do {
      source = (this->fields).pool;
      if ((pLVar1->fields)._size <= (int)uVar2) {
        if (*(int *)&(TypeInfo__TypePoolManager____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_01 = TypeInfo__TypePoolManager____c->static_fields->__9__2_0;
        if (this_01 == (Func_2_Pool_Type_ *)0x0) {
          if (*(int *)&(TypeInfo__TypePoolManager____c->_1).field_0x1c == 0) {
            FUN_?();
          }
          object = TypeInfo__TypePoolManager____c->static_fields->__9;
          this_01 = (Func_2_Pool_Type_ *)FUN_?(TypeInfo__System__Func<Pool,_System::Type>);
          Newtonsoft.Json.dll::Newtonsoft::Json::Serialization::ObjectConstructor`1[Unity::IL2CPP::
          Metadata::__Il2CppFullySharedGenericType]::
          ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    ((ObjectConstructor_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                     this_01,(Object *)object,MethodInfo__TypePoolManager____c___Awake_b__2_0_Pool_,
                     (MethodInfo *)0x0);
          TypeInfo__TypePoolManager____c->static_fields->__9__2_0 = this_01;
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&TypeInfo__TypePoolManager____c->static_fields->__9__2_0 >>
                           0xc);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar6 = uVar4 == *puVar5;
              if (bVar6) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
        }
        pMVar7 = 
        System__Collections__Generic__Dictionary<System::Type,_Pool>_MethodInfo__System__Linq__Enumerable__ToDictionary<Pool,_System::Type>_System__Collections__Generic__IEnumerable<Pool>__System__Func<Pool,_System::Type>_
        ;
        if ((
            System__Collections__Generic__Dictionary<System::Type,_Pool>_MethodInfo__System__Linq__Enumerable__ToDictionary<Pool,_System::Type>_System__Collections__Generic__IEnumerable<Pool>__System__Func<Pool,_System::Type>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       System__Collections__Generic__Dictionary<System::Type,_Pool>_MethodInfo__System__Linq__Enumerable__ToDictionary<Pool,_System::Type>_System__Collections__Generic__IEnumerable<Pool>__System__Func<Pool,_System::Type>_
                       );
        }
        elementSelector =
             System.Core.dll::System::Linq::IdentityFunction`1[System::Object]::
             IdentityFunction_1_System_Object__get_Instance
                       ((pMVar7->field7_0x38).rgctx_data[2].method);
        pDVar8 = (Dictionary_2_System_Type_Pool_ *)
                 System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_11
                           ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Object_ *)this_01,
                            elementSelector,(IEqualityComparer_1_System_Object_ *)0x0,
                            (pMVar7->field7_0x38).rgctx_data[5].method);
        bVar6 = iRam_? != 0;
        (this->fields).poolAsDictionary = pDVar8;
        if (bVar6) {
          uVar2 = (uint)((ulonglong)&(this->fields).poolAsDictionary >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        return;
      }
      if (source == (List_1_Pool_ *)0x0) break;
      if ((uint)(source->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pPVar10 = (source->fields)._items;
      if (pPVar10 == (Pool__Array *)0x0) break;
      if ((uint)pPVar10->max_length <= uVar2) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_00 = *(Pool **)((longlong)pPVar10->vector + lVar3 + -0x20);
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
      pvVar11 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
      parent = (Transform *)
               UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (pvVar11,
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
      if (this_00 == (Pool *)0x0) break;
      Pool::Pool_Initialize(this_00,parent,(MethodInfo *)0x0);
      pLVar1 = (this->fields).pool;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_Pool_ *)0x0);
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Pool GetPool[Object]() */

Pool * Assembly-CSharp.dll::TypePoolManager::TypePoolManager_GetPool
                 (TypePoolManager *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).poolAsDictionary;
  pvVar1 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pvVar1 == (void *)0x0) {
    key = (Object *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar2 = FUN_?(pvVar1,1);
    key = (Object *)FUN_?(lVar2 + 0x20);
  }
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pPVar4 = (Pool *)(*pcVar3)();
    return pPVar4;
  }
  uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_00,key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar5 < 0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pPVar4 = (Pool *)(*pcVar3)();
    return pPVar4;
  }
  pDVar6 = (this_00->fields)._entries;
  if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                 *)0x0) {
    if (uVar5 < (uint)pDVar6->max_length) {
      return (Pool *)pDVar6->vector[(int)uVar5].value;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    pPVar4 = (Pool *)(*pcVar3)();
    return pPVar4;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pPVar4 = (Pool *)(*pcVar3)();
  return pPVar4;
}


/* Object Instantiate[Object]() */

Object * Assembly-CSharp.dll::TypePoolManager::TypePoolManager_Instantiate
                   (TypePoolManager *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  this_00 = (this->fields).poolAsDictionary;
  pvVar1 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pvVar1 == (void *)0x0) {
    pOVar2 = (Object *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pvVar1,1);
    pOVar2 = (Object *)FUN_?(lVar3 + 0x20);
  }
  if ((this_00 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
     (this_01 = (Pool *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                  ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                                  ), this_01 == (Pool *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    pOVar2 = (Object *)(*pcVar4)();
    return pOVar2;
  }
  pMVar5 = (method->field7_0x38).rgctx_data[1].method;
  if ((pMVar5->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(pMVar5);
  }
  pMVar6 = Pool::Pool_get_Next(this_01,(MethodInfo *)0x0);
  lVar3 = *(longlong *)(pMVar5->field7_0x38).methodMetadataHandle;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_?(lVar3);
  }
  if (pMVar6 != (MonoBehaviour *)0x0) {
    pMVar7 = pMVar6->klass;
    cVar8 = FUN_?(lVar3,pMVar7);
    if (cVar8 != '\0') {
      return (Object *)pMVar6;
    }
    if (((pMVar7->_1).field_0x6e & 0x10) != 0) {
      if (((((*(byte *)(lVar3 + 0x118) & 0x20) != 0) || (*(char *)(lVar3 + 0x2a) == '\x13')) ||
          (*(char *)(lVar3 + 0x2a) == '\x1e')) &&
         (((*(longlong *)(lVar3 + 0x70) != 0 &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x70) + 0x28) != 0)) &&
          (lVar9 = FUN_?(pMVar6), lVar9 != 0)))) {
        return (Object *)pMVar6;
      }
      pMVar10 = (MonoBehaviour *)0x0;
      if (lVar3 == lRam_?) {
        pMVar10 = pMVar6;
      }
      return (Object *)pMVar10;
    }
  }
  return (Object *)0x0;
}


/* Void Return[Object](Object) */

void Assembly-CSharp.dll::TypePoolManager::TypePoolManager_Return
               (TypePoolManager *this,Object *obj,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  this_00 = (this->fields).poolAsDictionary;
  pvVar1 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pvVar1 == (void *)0x0) {
    pOVar2 = (Object *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pvVar1,1);
    pOVar2 = (Object *)FUN_?(lVar3 + 0x20);
  }
  if ((this_00 == (Dictionary_2_System_Type_Pool_ *)0x0) ||
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Type,_Pool>__get_Item_System__Type_
                         ), pOVar2 == (Object *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_,obj,0,in_R9,
                  unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar5 = pOVar2[3].klass;
  uVar6 = 0;
  if (pOVar5 != (Object__Class *)0x0) {
    lVar3 = 0x20;
    do {
      if (*(int *)&(pOVar5->_0).namespaze <= (int)uVar6) {
        if (obj != (Object *)0x0) {
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
                    ((Object_1 *)pGVar7,0.0,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pOVar5 = pOVar2[3].klass;
      if (pOVar5 == (Object__Class *)0x0) break;
      if (*(uint *)&(pOVar5->_0).namespaze <= uVar6) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pOVar8 = *(Object **)((longlong)&(pOVar5->_0).image + lVar3);
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
      if (obj == (Object *)0x0 && pOVar8 == (Object *)0x0) {
code_?:
        if ((obj != (Object *)0x0) &&
           (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)obj,(MethodInfo *)0x0), pGVar7 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar7,0,(MethodInfo *)0x0);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)obj,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_01,(Transform *)pOVar2[2].klass,(MethodInfo *)0x0);
            if (pOVar2[2].monitor != (MonitorData *)0x0) {
              FUN_?(pOVar2[2].monitor,uVar6,
                            MethodInfo__System__Collections__Generic__List<int>__Add_int_);
              return;
            }
          }
        }
        break;
      }
      if (obj == (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar8 == (Object *)0x0) break;
        bVar9 = pOVar8[1].klass == (Object__Class *)0x0;
      }
      else if (pOVar8 == (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar9 = obj[1].klass == (Object__Class *)0x0;
      }
      else {
        bVar9 = pOVar8 == obj;
      }
      if (bVar9) goto code_?;
      pOVar5 = pOVar2[3].klass;
      uVar6 = uVar6 + 1;
      lVar3 = lVar3 + 8;
    } while (pOVar5 != (Object__Class *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TypePoolManager::TypePoolManager_Update
               (TypePoolManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&Pool_MethodInfo__TypePoolManager__GetPool<Bullet>__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Noooo_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_YEAH_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Intended);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_What_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)(0x61);
  if (cVar3 != '\0') {
    lVar4 = FUN_?(this);
    if (lVar4 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Noooo_,(MethodInfo *)0x0);
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_YEAH_,(MethodInfo *)0x0);
    }
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)(0x62);
  if (cVar3 == '\0') {
    return;
  }
  lVar4 = FUN_?(this);
  if (lVar4 != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar5 = StringLiteral_What_;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar6 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,0,pSVar5);
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar5 = StringLiteral_Intended;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar6 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,3,pSVar5);
  return;
}

