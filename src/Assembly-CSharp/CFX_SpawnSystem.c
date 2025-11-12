
/* Void Awake() */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_Awake
               (CFX_SpawnSystem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CFX_SpawnSystem);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CFX_SpawnSystem__There_should_on);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
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
  if (pCVar1 != (CFX_SpawnSystem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_CFX_SpawnSystem__There_should_on,(MethodInfo *)0x0);
    }
  }
  TypeInfo__CFX_SpawnSystem->static_fields->instance = this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__CFX_SpawnSystem->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* GameObject GetNextObject(GameObject, Boolean) */

GameObject *
Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_GetNextObject
          (GameObject *sourceObj,bool activateObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CFX_SpawnSystem);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___ID_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__CFX_SpawnSystem_GetNextPoolObje);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sourceObj != (GameObject *)0x0) {
    key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                    ((Object_1 *)sourceObj,(MethodInfo *)0x0);
    pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
    if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
       (this = (Dictionary_2_System_Int32_System_Single_ *)(pCVar1->fields).poolCursors,
       this != (Dictionary_2_System_Int32_System_Single_ *)0x0)) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__FindEntry
                        (this,key,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                                  ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        values = (String__Array *)FUN_?(TypeInfo__System__String);
        if (values != (String__Array *)0x0) {
          FUN_?(values,0,StringLiteral__CFX_SpawnSystem_GetNextPoolObje);
          pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                              ((Object_1 *)sourceObj,(MethodInfo *)0x0);
          FUN_?(values,1,pSVar3);
          FUN_?(values,2);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_4[0]._pointer._value = (void *)0x0;
          aRStack_4[0]._length = 0;
          aRStack_4[0]._12_4_ = 0;
          pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                              (key,aRStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          FUN_?(values,3,pSVar3);
          FUN_?(values,4,::StringLiteral__);
          pSVar3 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar3,(MethodInfo *)0x0);
          return (GameObject *)0x0;
        }
      }
      else {
        pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
        if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
           (pDVar5 = (pCVar1->fields).poolCursors,
           pDVar5 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
          uVar6 = FUN_?(pDVar5,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                               );
          pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
          if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
             (pDVar5 = (pCVar1->fields).poolCursors,
             pDVar5 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
            iVar7 = FUN_?(pDVar5,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                 );
            uVar8 = CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
            Dictionary_2_System_Int32_System_Int32__TryInsert
                      (pDVar5,key,iVar7 + 1,(InsertionBehavior__Enum)uVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                       ->klass->rgctx_data[0x22].method);
            pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
            if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
               (pDVar5 = (pCVar1->fields).poolCursors,
               pDVar5 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
              iVar7 = FUN_?(pDVar5,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                   );
              pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
              if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
                 ((pDVar9 = (pCVar1->fields).instantiatedObjects,
                  pDVar9 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0 &&
                  (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar9,key,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                      ), pOVar10 != (Object *)0x0)))) {
                if (*(int *)&pOVar10[1].monitor <= iVar7) {
                  pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
                  if ((pCVar1 == (CFX_SpawnSystem *)0x0) ||
                     (pDVar5 = (pCVar1->fields).poolCursors,
                     pDVar5 == (Dictionary_2_System_Int32_System_Int32_ *)0x0))
                  goto code_?;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__TryInsert
                            (pDVar5,key,0,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),1),
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                             ->klass->rgctx_data[0x22].method);
                }
                pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
                if (((pCVar1 != (CFX_SpawnSystem *)0x0) &&
                    (pDVar9 = (pCVar1->fields).instantiatedObjects,
                    pDVar9 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0)) &&
                   (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,System::Object]::
                             Dictionary_2_System_Int32_System_Object__get_Item
                                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar9,key,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                       ), pOVar10 != (Object *)0x0)) {
                  if (*(uint *)&pOVar10[1].monitor <= uVar6) {
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                    pcVar11 = (code *)swi(3);
                    pGVar12 = (GameObject *)(*pcVar11)();
                    return pGVar12;
                  }
                  pOVar13 = pOVar10[1].klass;
                  if (pOVar13 != (Object__Class *)0x0) {
                    if (*(uint *)&(pOVar13->_0).namespaze <= uVar6) {
                      FUN_?();
                      pcVar11 = (code *)swi(3);
                      pGVar12 = (GameObject *)(*pcVar11)();
                      return pGVar12;
                    }
                    pGVar12 = (GameObject *)(&(pOVar13->_0).byval_arg.data)[(int)uVar6].typeHandle;
                    if (activateObject != 0) {
                      if (pGVar12 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar12,1,(MethodInfo *)0x0);
                    }
                    return pGVar12;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  pGVar12 = (GameObject *)(*pcVar11)();
  return pGVar12;
}


/* Void PreloadObject(GameObject, Int32) */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_PreloadObject
               (GameObject *sourceObj,int32_t poolSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CFX_SpawnSystem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
  if (pCVar1 == (CFX_SpawnSystem *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_,
                  sourceObj,poolSize,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Add_int__System__Collections__Generic__List<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CFX_AutoDestructShuriken__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_AutoDestructShuriken>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CFX_LightIntensityFade__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_LightIntensityFade>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sourceObj != (GameObject *)0x0) {
    key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                    ((Object_1 *)sourceObj,(MethodInfo *)0x0);
    this = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pCVar1->fields).instantiatedObjects;
    if (this != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this,key,MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                                  ->klass->rgctx_data[0x21].method);
      if (-1 < iVar4) {
code_?:
        iVar5 = 0;
        if (0 < poolSize) {
          do {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            this_02 = (GameObject *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)sourceObj,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                );
            if (this_02 == (GameObject *)0x0) goto code_?;
            p_Var6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_4
                               (this_02,1,
                                CFX_AutoDestructShuriken__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_AutoDestructShuriken>_bool_____
                               );
            uVar6 = 0;
            pp_Var9 = p_Var6->vector;
            if (p_Var6 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
            for (; uVar7 = (uint)p_Var6->max_length, (int)uVar6 < (int)uVar7; uVar6 = uVar6 + 1) {
              if (uVar7 <= uVar6) goto code_?;
              if (*pp_Var9 == (_Il2CppFullySharedGenericType *)0x0) goto code_?;
              *(undefined1 *)&(*pp_Var9)[2].klass = 1;
              pp_Var9 = pp_Var9 + 1;
            }
            p_Var6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_4
                               (this_02,1,
                                CFX_LightIntensityFade__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_LightIntensityFade>_bool_____
                               );
            uVar6 = 0;
            pp_Var9 = p_Var6->vector;
            if (p_Var6 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
            for (; uVar7 = (uint)p_Var6->max_length, (int)uVar6 < (int)uVar7; uVar6 = uVar6 + 1) {
              if (uVar7 <= uVar6) {
code_?:
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (*pp_Var9 == (_Il2CppFullySharedGenericType *)0x0) goto code_?;
              *(undefined1 *)&(*pp_Var9)[3].klass = 0;
              pp_Var9 = pp_Var9 + 1;
            }
            pDVar8 = (pCVar1->fields).instantiatedObjects;
            if ((pDVar8 == (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) ||
               (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar8,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                   ), pOVar9 == (Object *)0x0)) goto code_?;
            FUN_?(pOVar9,this_02);
            if ((pCVar1->fields).hideObjectsInHierarchy != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                        ((Object_1 *)this_02,HideFlags__Enum_HideInHierarchy,(MethodInfo *)0x0);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < poolSize);
        }
        return;
      }
      pDVar8 = (pCVar1->fields).instantiatedObjects;
      this_01 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>)
      ;
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
      if (pDVar8 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) {
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar8,key,(Object *)this_01,
                   (InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Add_int__System__Collections__Generic__List<UnityEngine::GameObject>_
                   ->klass->rgctx_data[0x22].method);
        this_00 = (pCVar1->fields).poolCursors;
        if (this_00 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__TryInsert
                    (this_00,key,0,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                     klass->rgctx_data[0x22].method);
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_Start
               (CFX_SpawnSystem *this,MethodInfo *method)

{
  (this->fields).allObjectsLoaded = 0;
  uVar1 = 0;
  pGVar2 = (this->fields).objectsToPreload;
  if (pGVar2 != (GameObject__Array *)0x0) {
    lVar3 = 0x20;
    lVar4 = 0x20;
    do {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        (this->fields).allObjectsLoaded = 1;
        return;
      }
      pGVar2 = (this->fields).objectsToPreload;
      if (pGVar2 == (GameObject__Array *)0x0) break;
      if ((uint)pGVar2->max_length <= uVar1) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      sourceObject = *(GameObject **)((longlong)pGVar2->vector + lVar4 + -0x20);
      pIVar6 = (this->fields).objectsToPreloadTimes;
      if (pIVar6 == (Int32__Array *)0x0) break;
      if ((uint)pIVar6->max_length <= uVar1) goto code_?;
      number = *(int32_t *)((longlong)pIVar6->vector + lVar3 + -0x20);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CFX_SpawnSystem);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
      if (this_00 == (CFX_SpawnSystem *)0x0) break;
      CFX_SpawnSystem_addObjectToPool(this_00,sourceObject,number,(MethodInfo *)0x0);
      pGVar2 = (this->fields).objectsToPreload;
      uVar1 = uVar1 + 1;
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + 4;
    } while (pGVar2 != (GameObject__Array *)0x0);
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UnloadObjects(GameObject) */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_UnloadObjects
               (GameObject *sourceObj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CFX_SpawnSystem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
  if (pCVar1 == (CFX_SpawnSystem *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,sourceObj,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__CFX_SpawnSystem_removeObjectsFr);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___ID_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sourceObj != (GameObject *)0x0) {
    key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                    ((Object_1 *)sourceObj,(MethodInfo *)0x0);
    this = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pCVar1->fields).instantiatedObjects;
    if (this != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this,key,MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                                  ->klass->rgctx_data[0x21].method);
      if (iVar3 < 0) {
        values = (String__Array *)FUN_?(TypeInfo__System__String);
        if (values != (String__Array *)0x0) {
          FUN_?(values,0,StringLiteral__CFX_SpawnSystem_removeObjectsFr);
          pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                             ((Object_1 *)sourceObj,(MethodInfo *)0x0);
          FUN_?(values,1,pSVar4);
          FUN_?(values,2);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_5[0]._pointer._value = (void *)0x0;
          aRStack_5[0]._length = 0;
          aRStack_5[0]._12_4_ = 0;
          pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                             (key,aRStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          FUN_?(values,3,pSVar4);
          FUN_?(values,4,::StringLiteral__);
          pSVar4 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar4,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pDVar6 = (pCVar1->fields).instantiatedObjects;
        if ((pDVar6 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) &&
           (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                               ), pOVar7 != (Object *)0x0)) {
          index = *(int *)&pOVar7[1].monitor - 1;
          if (-1 < (int)index) {
            lVar8 = (longlong)(int)index * 8 + 0x20;
            do {
              pDVar6 = (pCVar1->fields).instantiatedObjects;
              if ((pDVar6 == (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) ||
                 (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                     ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,key,
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                     ), pOVar7 == (Object *)0x0)) goto code_?;
              if (*(uint *)&pOVar7[1].monitor <= index) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pOVar9 = pOVar7[1].klass;
              if (pOVar9 == (Object__Class *)0x0) goto code_?;
              if (*(uint *)&(pOVar9->_0).namespaze <= index) {
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pDVar6 = (pCVar1->fields).instantiatedObjects;
              obj = *(Object_1 **)((longlong)&(pOVar9->_0).image + lVar8);
              if ((pDVar6 == (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) ||
                 (this_01 = (List_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,key,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                      ), this_01 == (List_1_System_Object_ *)0x0))
              goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__RemoveAt
                        (this_01,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAt_int_
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
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                        (obj,0.0,(MethodInfo *)0x0);
              lVar8 = lVar8 + -8;
              index = index - 1;
            } while (-1 < (int)index);
          }
          pDVar6 = (pCVar1->fields).instantiatedObjects;
          if (pDVar6 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Remove_int_
                      );
            this_00 = (Dictionary_2_System_Int32_System_Single_ *)(pCVar1->fields).poolCursors;
            if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__Remove
                        (this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Remove_int_
                        );
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CFX_SpawnSystem() */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem__ctor
               (CFX_SpawnSystem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject__Array *)FUN_?(TypeInfo__UnityEngine__GameObject,0);
  bVar2 = iRam_? != 0;
  (this->fields).objectsToPreload = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).objectsToPreload >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pIVar7 = (Int32__Array *)FUN_?(TypeInfo__System__Int32,0);
  bVar2 = iRam_? != 0;
  (this->fields).objectsToPreloadTimes = pIVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).objectsToPreloadTimes >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).instantiatedObjects =
       (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).instantiatedObjects >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar8 = (Dictionary_2_System_Int32_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  FUN_?(pDVar8,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__)
  ;
  bVar2 = iRam_? != 0;
  (this->fields).poolCursors = pDVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).poolCursors >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
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
  return;
}


/* Void addObjectToPool(GameObject, Int32) */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_addObjectToPool
               (CFX_SpawnSystem *this,GameObject *sourceObject,int32_t number,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_,
                  sourceObject,CONCAT44(in_register_00000084,number),uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Add_int__System__Collections__Generic__List<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CFX_AutoDestructShuriken__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_AutoDestructShuriken>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  CFX_LightIntensityFade__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_LightIntensityFade>_bool_____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sourceObject != (GameObject *)0x0) {
    key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                    ((Object_1 *)sourceObject,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).instantiatedObjects;
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar2) {
code_?:
        iVar3 = 0;
        if (0 < number) {
          do {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            this_03 = (GameObject *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)sourceObject,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                );
            if (this_03 == (GameObject *)0x0) goto code_?;
            p_Var5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_4
                               (this_03,1,
                                CFX_AutoDestructShuriken__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_AutoDestructShuriken>_bool_____
                               );
            uVar4 = 0;
            pp_Var8 = p_Var5->vector;
            if (p_Var5 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
            for (; uVar5 = (uint)p_Var5->max_length, (int)uVar4 < (int)uVar5; uVar4 = uVar4 + 1) {
              if (uVar5 <= uVar4) goto code_?;
              if (*pp_Var8 == (_Il2CppFullySharedGenericType *)0x0) goto code_?;
              *(undefined1 *)&(*pp_Var8)[2].klass = 1;
              pp_Var8 = pp_Var8 + 1;
            }
            p_Var5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_4
                               (this_03,1,
                                CFX_LightIntensityFade__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_LightIntensityFade>_bool_____
                               );
            uVar4 = 0;
            pp_Var8 = p_Var5->vector;
            if (p_Var5 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
            for (; uVar5 = (uint)p_Var5->max_length, (int)uVar4 < (int)uVar5; uVar4 = uVar4 + 1) {
              if (uVar5 <= uVar4) {
code_?:
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (*pp_Var8 == (_Il2CppFullySharedGenericType *)0x0) goto code_?;
              *(undefined1 *)&(*pp_Var8)[3].klass = 0;
              pp_Var8 = pp_Var8 + 1;
            }
            pDVar7 = (this->fields).instantiatedObjects;
            if ((pDVar7 == (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) ||
               (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                   ), pOVar8 == (Object *)0x0)) goto code_?;
            FUN_?(pOVar8,this_03);
            if ((this->fields).hideObjectsInHierarchy != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                        ((Object_1 *)this_03,HideFlags__Enum_HideInHierarchy,(MethodInfo *)0x0);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < number);
        }
        return;
      }
      pDVar7 = (this->fields).instantiatedObjects;
      this_02 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>)
      ;
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
      if (pDVar7 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) {
        behavior = CONCAT31((int3)((uint)uVar1 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,key,(Object *)this_02,behavior
                   ,MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Add_int__System__Collections__Generic__List<UnityEngine::GameObject>_
                    ->klass->rgctx_data[0x22].method);
        this_01 = (this->fields).poolCursors;
        if (this_01 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__TryInsert
                    (this_01,key,0,CONCAT31((int3)(behavior >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_->
                     klass->rgctx_data[0x22].method);
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean get_AllObjectsLoaded() */

bool Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_get_AllObjectsLoaded(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CFX_SpawnSystem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
  if (pCVar1 != (CFX_SpawnSystem *)0x0) {
    return (pCVar1->fields).allObjectsLoaded;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void removeObjectsFromPool(GameObject) */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_removeObjectsFromPool
               (CFX_SpawnSystem *this,GameObject *sourceObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__CFX_SpawnSystem_removeObjectsFr);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___ID_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (sourceObject != (GameObject *)0x0) {
    key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                    ((Object_1 *)sourceObject,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).instantiatedObjects;
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar1 < 0) {
        values = (String__Array *)FUN_?(TypeInfo__System__String);
        if (values != (String__Array *)0x0) {
          FUN_?(values,0,StringLiteral__CFX_SpawnSystem_removeObjectsFr);
          pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                             ((Object_1 *)sourceObject,(MethodInfo *)0x0);
          FUN_?(values,1,pSVar2);
          FUN_?(values,2);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
               field_0x135 & 1) == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_3[0]._pointer._value = (void *)0x0;
          aRStack_3[0]._length = 0;
          aRStack_3[0]._12_4_ = 0;
          pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                             (key,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          FUN_?(values,3,pSVar2);
          FUN_?(values,4,::StringLiteral__);
          pSVar2 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar2,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pDVar4 = (this->fields).instantiatedObjects;
        if ((pDVar4 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) &&
           (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                               ), pOVar5 != (Object *)0x0)) {
          index = *(int *)&pOVar5[1].monitor - 1;
          if (-1 < (int)index) {
            lVar6 = (longlong)(int)index * 8 + 0x20;
            do {
              pDVar4 = (this->fields).instantiatedObjects;
              if ((pDVar4 == (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) ||
                 (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                     ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                     ), pOVar5 == (Object *)0x0)) goto code_?;
              if (*(uint *)&pOVar5[1].monitor <= index) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pOVar8 = pOVar5[1].klass;
              if (pOVar8 == (Object__Class *)0x0) goto code_?;
              if (*(uint *)&(pOVar8->_0).namespaze <= index) {
                FUN_?();
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pDVar4 = (this->fields).instantiatedObjects;
              obj = *(Object_1 **)((longlong)&(pOVar8->_0).image + lVar6);
              if ((pDVar4 == (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) ||
                 (this_02 = (List_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                      ), this_02 == (List_1_System_Object_ *)0x0))
              goto code_?;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__RemoveAt
                        (this_02,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAt_int_
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
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                        (obj,0.0,(MethodInfo *)0x0);
              lVar6 = lVar6 + -8;
              index = index - 1;
            } while (-1 < (int)index);
          }
          pDVar4 = (this->fields).instantiatedObjects;
          if (pDVar4 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Remove_int_
                      );
            this_01 = (Dictionary_2_System_Int32_System_Single_ *)(this->fields).poolCursors;
            if (this_01 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__Remove
                        (this_01,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Remove_int_
                        );
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

