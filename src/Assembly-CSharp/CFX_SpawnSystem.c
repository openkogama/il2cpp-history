
/* Void Awake() */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_Awake
               (CFX_SpawnSystem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CFX_SpawnSystem);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_CFX_SpawnSystem__There_should_on);
    cRam_? = '\x01';
  }
  x = TypeInfo__CFX_SpawnSystem->static_fields->instance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = (CFX_SpawnSystem *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_CFX_SpawnSystem__There_should_on,(MethodInfo *)0x0);
  }
  TypeInfo__CFX_SpawnSystem->static_fields->instance = this;
  func_?();
  return;
}


/* GameObject GetNextObject(GameObject, Boolean) */

GameObject *
Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_GetNextObject
          (GameObject *sourceObj,bool activateObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CFX_SpawnSystem);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                   );
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral___ID_);
    func_?(&StringLiteral__CFX_SpawnSystem_GetNextPoolObje);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (sourceObj != (GameObject *)0x0) {
    key.m_value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                            ((Object_1 *)sourceObj,(MethodInfo *)0x0);
    pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
    if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
       (this = (Dictionary_2_System_Int32_System_Single_ *)(pCVar1->fields).poolCursors,
       this != (Dictionary_2_System_Int32_System_Single_ *)0x0)) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        (this,key.m_value,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        values = (String__Array *)func_?();
        pSVar3 = StringLiteral__CFX_SpawnSystem_GetNextPoolObje;
        if (values != (String__Array *)0x0) {
          if (values->max_length != 0) {
            values->vector[0] = StringLiteral__CFX_SpawnSystem_GetNextPoolObje;
            func_?(values->vector,pSVar3);
            pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                               ((Object_1 *)sourceObj,(MethodInfo *)0x0);
            if (1 < values->max_length) {
              values->vector[1] = pSVar3;
              func_?(values->vector + 1,pSVar3);
              pSVar3 = StringLiteral___ID_;
              if (2 < values->max_length) {
                values->vector[2] = StringLiteral___ID_;
                func_?(values->vector + 2,pSVar3);
                pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                                   ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                if (3 < values->max_length) {
                  values->vector[3] = pSVar3;
                  func_?(values->vector + 3,pSVar3);
                  pSVar3 = ::StringLiteral__;
                  if (4 < values->max_length) {
                    values->vector[4] = ::StringLiteral__;
                    func_?(values->vector + 4,pSVar3);
                    pSVar3 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0)
                    ;
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)pSVar3,(MethodInfo *)0x0);
                    return (GameObject *)0x0;
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
      else {
        pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
        if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
           (pDVar4 = (Dictionary_2_System_Int32_System_Object_ *)(pCVar1->fields).poolCursors,
           pDVar4 != (Dictionary_2_System_Int32_System_Object_ *)0x0)) {
          index = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            (pDVar4,key.m_value,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                            );
          pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
          if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
             (pDVar4 = (Dictionary_2_System_Int32_System_Object_ *)(pCVar1->fields).poolCursors,
             pDVar4 != (Dictionary_2_System_Int32_System_Object_ *)0x0)) {
            pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               (pDVar4,key.m_value,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                               );
            pMVar6 = 
            MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_;
            key_00.m_value = (int32_t)&UNK_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
            Dictionary_2_System_Int32_System_Int32__set_Item
                      ((Dictionary_2_System_Int32_System_Int32_ *)pDVar4,key.m_value,
                       (int32_t)((int)&pOVar5->klass + 1),
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                      );
            pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
            if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
               (pDVar4 = (Dictionary_2_System_Int32_System_Object_ *)(pCVar1->fields).poolCursors,
               pDVar4 != (Dictionary_2_System_Int32_System_Object_ *)0x0)) {
              pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 (pDVar4,key_00.m_value,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                                 );
              pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
              if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
                 ((pDVar7 = (pCVar1->fields).instantiatedObjects,
                  pDVar7 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0 &&
                  (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                                       key_00.m_value,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                      ), pOVar8 != (Object *)0x0)))) {
                if ((int)pOVar8[1].monitor <= (int)pOVar5) {
                  pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
                  if ((pCVar1 == (CFX_SpawnSystem *)0x0) ||
                     (this_00 = (pCVar1->fields).poolCursors,
                     this_00 == (Dictionary_2_System_Int32_System_Int32_ *)0x0))
                  goto code_?;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__set_Item
                            (this_00,key_00.m_value,0,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                            );
                }
                pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
                if (((pCVar1 != (CFX_SpawnSystem *)0x0) &&
                    (pDVar7 = (pCVar1->fields).instantiatedObjects,
                    pDVar7 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0)) &&
                   (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32,System::Object]::
                              Dictionary_2_System_Int32_System_Object__get_Item
                                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                                         key_00.m_value,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                        ),
                   this_01 !=
                   (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
                  this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (this_01,(int32_t)index,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                                      );
                  activateObject = (bool)pMVar6;
                  if (activateObject == 0) {
                    return (GameObject *)this_02;
                  }
                  if (this_02 != (RegexCharClass_SingleRange)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              ((GameObject *)this_02,1,(MethodInfo *)0x0);
                    return (GameObject *)this_02;
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
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pGVar10 = (GameObject *)(*pcVar9)();
  return pGVar10;
}


/* Void PreloadObject(GameObject, Int32) */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_PreloadObject
               (GameObject *sourceObj,int32_t poolSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this = TypeInfo__CFX_SpawnSystem->static_fields->instance;
  if (this != (CFX_SpawnSystem *)0x0) {
    CFX_SpawnSystem_addObjectToPool(this,sourceObj,poolSize,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_Start
               (CFX_SpawnSystem *this,MethodInfo *method)

{
  uVar1 = 0;
  pGVar2 = (this->fields).objectsToPreload;
  (this->fields).allObjectsLoaded = 0;
  if (pGVar2 != (GameObject__Array *)0x0) {
    iVar3 = 0x10;
    do {
      if ((int)pGVar2->max_length <= (int)uVar1) {
        (this->fields).allObjectsLoaded = 1;
        return;
      }
      pGVar2 = (this->fields).objectsToPreload;
      if (pGVar2 == (GameObject__Array *)0x0) break;
      if (pGVar2->max_length <= uVar1) goto code_?;
      sourceObject = *(GameObject **)((int)pGVar2->vector + iVar3 + -0x10);
      pIVar4 = (this->fields).objectsToPreloadTimes;
      if (pIVar4 == (Int32__Array *)0x0) break;
      if (pIVar4->max_length <= uVar1) goto code_?;
      number = *(int32_t *)((int)pIVar4->vector + iVar3 + -0x10);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__CFX_SpawnSystem);
        cRam_? = '\x01';
      }
      this_00 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
      if (this_00 == (CFX_SpawnSystem *)0x0) break;
      CFX_SpawnSystem_addObjectToPool(this_00,sourceObject,number,(MethodInfo *)0x0);
      pGVar2 = (this->fields).objectsToPreload;
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 4;
    } while (pGVar2 != (GameObject__Array *)0x0);
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UnloadObjects(GameObject) */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_UnloadObjects
               (GameObject *sourceObj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this = TypeInfo__CFX_SpawnSystem->static_fields->instance;
  if (this != (CFX_SpawnSystem *)0x0) {
    CFX_SpawnSystem_removeObjectsFromPool(this,sourceObj,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CFX_SpawnSystem() */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem__ctor
               (CFX_SpawnSystem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Dictionary__
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject__Array *)func_?(TypeInfo__UnityEngine__GameObject,0);
  ppGVar2 = &(this->fields).objectsToPreload;
  *ppGVar2 = pGVar1;
  func_?(ppGVar2,pGVar1);
  pIVar3 = (Int32__Array *)func_?(TypeInfo__System__Int32,0);
  ppIVar4 = &(this->fields).objectsToPreloadTimes;
  *ppIVar4 = pIVar3;
  func_?(ppIVar4,pIVar3);
  pDVar5 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar5,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Dictionary__
            );
  ppDVar6 = &(this->fields).instantiatedObjects;
  *ppDVar6 = (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)pDVar5;
  func_?(ppDVar6,pDVar5);
  pDVar5 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar5,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  (this->fields).poolCursors = (Dictionary_2_System_Int32_System_Int32_ *)pDVar5;
  func_?(&(this->fields).poolCursors);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Void addObjectToPool(GameObject, Int32) */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_addObjectToPool
               (CFX_SpawnSystem *this,GameObject *sourceObject,int32_t number,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Add_int__System__Collections__Generic__List<UnityEngine::GameObject>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                   );
    func_?(&
                    CFX_AutoDestructShuriken__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_AutoDestructShuriken>_bool_____
                   );
    func_?(&
                    CFX_LightIntensityFade__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_LightIntensityFade>_bool_____
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (sourceObject != (GameObject *)0x0) {
    key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                    ((Object_1 *)sourceObject,(MethodInfo *)0x0);
    this_00 = (this->fields).instantiatedObjects;
    if (this_00 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                        );
      if (bVar1 == 0) {
        number = (int32_t)(this->fields).instantiatedObjects;
        this_01 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>
                                 );
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
        if (((Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)number ==
             (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) ||
           (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)number,key,(Object *)this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Add_int__System__Collections__Generic__List<UnityEngine::GameObject>_
                      ), _UNK_? == (Dictionary_2_System_Int32_System_Int32_ *)0x0))
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__Add
                  (_UNK_?,key,0,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
        sourceObject = (GameObject *)&UNK_?;
      }
      iVar2 = 0;
      if (0 < number) {
        do {
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          sourceObject = (GameObject *)
                         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                   ((Object *)sourceObject,
                                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                   );
          if (sourceObject == (GameObject *)0x0) goto code_?;
          key_00 = &UNK_?;
          p_Var3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren_4
                             (sourceObject,1,
                              CFX_AutoDestructShuriken__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_AutoDestructShuriken>_bool_____
                             );
          uVar3 = 0;
          pp_Var5 = p_Var3->vector;
          while( true ) {
            if (p_Var3 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
            if ((int)p_Var3->max_length <= (int)uVar3) break;
            if (p_Var3->max_length <= uVar3) goto code_?;
            if (*pp_Var5 == (_Il2CppFullySharedGenericType *)0x0) goto code_?;
            uVar3 = uVar3 + 1;
            *(undefined1 *)&(*pp_Var5)[2].klass = 1;
            pp_Var5 = pp_Var5 + 1;
          }
          p_Var3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren_4
                             (sourceObject,1,
                              CFX_LightIntensityFade__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_LightIntensityFade>_bool_____
                             );
          uVar3 = 0;
          pp_Var5 = p_Var3->vector;
          while( true ) {
            if (p_Var3 == (_Il2CppFullySharedGenericType__Array *)0x0) goto code_?;
            if ((int)p_Var3->max_length <= (int)uVar3) break;
            if (p_Var3->max_length <= uVar3) goto code_?;
            if (*pp_Var5 == (_Il2CppFullySharedGenericType *)0x0) goto code_?;
            uVar3 = uVar3 + 1;
            *(undefined1 *)&(*pp_Var5)[4].klass = 0;
            pp_Var5 = pp_Var5 + 1;
          }
          if ((_UNK_? == (Dictionary_2_System_Int32_System_Object_ *)0x0) ||
             (this_02 = (List_1_System_Object_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  (_UNK_?,(int32_t)key_00,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                  ), this_02 == (List_1_System_Object_ *)0x0))
          goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (this_02,(Object *)sourceObject,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                    );
          if (UNK_? != '\0') {
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                      ((Object_1 *)sourceObject,HideFlags__Enum_HideInHierarchy,(MethodInfo *)0x0);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 1);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_?:
  func_?();
  goto code_?;
}


/* Boolean get_AllObjectsLoaded() */

bool Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_get_AllObjectsLoaded(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
  if (pCVar1 != (CFX_SpawnSystem *)0x0) {
    return (pCVar1->fields).allObjectsLoaded;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void removeObjectsFromPool(GameObject) */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_removeObjectsFromPool
               (CFX_SpawnSystem *this,GameObject *sourceObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Remove_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__CFX_SpawnSystem_removeObjectsFr);
    func_?(&StringLiteral___ID_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if (sourceObject != (GameObject *)0x0) {
    key.m_value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                            ((Object_1 *)sourceObject,(MethodInfo *)0x0);
    pDVar1 = (this->fields).instantiatedObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,key.m_value,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        values = (String__Array *)func_?();
        if (values != (String__Array *)0x0) {
          if (values->max_length != 0) {
            values->vector[0] = StringLiteral__CFX_SpawnSystem_removeObjectsFr;
            func_?();
            pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                               ((Object_1 *)sourceObject,(MethodInfo *)0x0);
            if (1 < values->max_length) {
              values->vector[1] = pSVar3;
              func_?();
              if (2 < values->max_length) {
                values->vector[2] = StringLiteral___ID_;
                func_?();
                pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                                   ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                if (3 < values->max_length) {
                  values->vector[3] = pSVar3;
                  func_?();
                  if (4 < values->max_length) {
                    values->vector[4] = ::StringLiteral__;
                    func_?();
                    pSVar3 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0)
                    ;
                    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                              ((Object *)pSVar3,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
      else {
        pDVar1 = (this->fields).instantiatedObjects;
        if ((pDVar1 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) &&
           (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key.m_value,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                               ), pOVar4 != (Object *)0x0)) {
          index = pOVar4[1].monitor;
          while (index = index + -1, -1 < (int)index) {
            pDVar1 = (this->fields).instantiatedObjects;
            if ((pDVar1 == (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) ||
               (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key.m_value,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                    ),
               this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
            goto code_?;
            obj = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                            );
            pDVar1 = (this->fields).instantiatedObjects;
            if ((pDVar1 == (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) ||
               (this_02 = (List_1_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key.m_value,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                    ), this_02 == (List_1_System_Object_ *)0x0))
            goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      (this_02,(int32_t)index,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAt_int_
                      );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            key.m_value = (int32_t)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
          }
          pDVar1 = (this->fields).instantiatedObjects;
          if (pDVar1 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key.m_value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Remove_int_
                      );
            this_00 = (Dictionary_2_System_Int32_System_Single_ *)(this->fields).poolCursors;
            if (this_00 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__Remove
                        (this_00,key.m_value,
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
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

