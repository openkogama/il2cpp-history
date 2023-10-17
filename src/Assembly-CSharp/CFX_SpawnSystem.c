
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
  if (sourceObj == (GameObject *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    key.m_value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                            ((Object_1 *)sourceObj,(MethodInfo *)0x0);
    pCVar2 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
    if ((pCVar2 == (CFX_SpawnSystem *)0x0) ||
       (this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
               (pCVar2->fields).poolCursors,
       this == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0))
    goto code_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this,(Object *)key.m_value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                      );
    if (bVar3 != 0) {
      pCVar2 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
      if ((pCVar2 != (CFX_SpawnSystem *)0x0) &&
         (pDVar4 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pCVar2->fields).poolCursors,
         pDVar4 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) {
        index = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          (pDVar4,key.m_value,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                          );
        pCVar2 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
        if ((pCVar2 != (CFX_SpawnSystem *)0x0) &&
           (pDVar5 = (Dictionary_2_System_Object_System_Object_ *)(pCVar2->fields).poolCursors,
           pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5,key.m_value,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                             );
          pMVar7 = 
          MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_;
          key_00.m_value = (int32_t)&UNK_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (pDVar5,(Object *)key.m_value,(Object *)((int)&pOVar6->klass + 1),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                    );
          pCVar2 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
          if ((pCVar2 != (CFX_SpawnSystem *)0x0) &&
             (pDVar4 = (Dictionary_2_System_Int32Enum_System_Object_ *)(pCVar2->fields).poolCursors,
             pDVar4 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) {
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               (pDVar4,key_00.m_value,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                               );
            pCVar2 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
            if ((pCVar2 != (CFX_SpawnSystem *)0x0) &&
               ((pDVar8 = (pCVar2->fields).instantiatedObjects,
                pDVar8 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0 &&
                (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar8,
                                     key_00.m_value,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                    ), pOVar9 != (Object *)0x0)))) {
              if ((int)pOVar9[1].monitor <= (int)pOVar6) {
                pCVar2 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
                if ((pCVar2 == (CFX_SpawnSystem *)0x0) ||
                   (pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
                             (pCVar2->fields).poolCursors,
                   pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0))
                goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__set_Item
                          (pDVar5,(Object *)key_00.m_value,(Object *)0x0,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                          );
              }
              pCVar2 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
              if (((pCVar2 != (CFX_SpawnSystem *)0x0) &&
                  (pDVar8 = (pCVar2->fields).instantiatedObjects,
                  pDVar8 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0)) &&
                 (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar8,
                                       key_00.m_value,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                      ),
                 this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 )) {
                this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (this_00,(int32_t)index,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                                    );
                activateObject = (bool)pMVar7;
                if (activateObject == 0) {
                  return (GameObject *)this_01;
                }
                if (this_01 != (RegexCharClass_SingleRange)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            ((GameObject *)this_01,1,(MethodInfo *)0x0);
                  return (GameObject *)this_01;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    values = (String__Array *)func_?();
    if (values == (String__Array *)0x0) goto code_?;
    if ((StringLiteral__CFX_SpawnSystem_GetNextPoolObje != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral__CFX_SpawnSystem_GetNextPoolObje,
                                 (values->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    pSVar11 = StringLiteral__CFX_SpawnSystem_GetNextPoolObje;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral__CFX_SpawnSystem_GetNextPoolObje;
    func_?(values->vector,pSVar11);
    pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                        ((Object_1 *)sourceObj,(MethodInfo *)0x0);
    if ((pSVar11 != (String *)0x0) &&
       (iVar10 = func_?(pSVar11,(values->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = pSVar11;
    func_?(values->vector + 1,pSVar11);
    if ((StringLiteral___ID_ != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral___ID_,(values->klass->_0).element_class), iVar10 == 0
       )) goto code_?;
    pSVar11 = StringLiteral___ID_;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = StringLiteral___ID_;
    func_?(values->vector + 2,pSVar11);
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if ((pSVar11 != (String *)0x0) &&
       (iVar10 = func_?(pSVar11,(values->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = pSVar11;
    func_?(values->vector + 3,pSVar11);
    if ((::StringLiteral__ == (String *)0x0) ||
       (iVar10 = func_?(::StringLiteral__,(values->klass->_0).element_class), iVar10 != 0))
    {
      pSVar11 = ::StringLiteral__;
      if (4 < values->max_length) {
        values->vector[4] = ::StringLiteral__;
        func_?(values->vector + 4,pSVar11);
        pSVar11 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar11,(MethodInfo *)0x0);
        return (GameObject *)0x0;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  pGVar13 = (GameObject *)(*pcVar12)();
  return pGVar13;
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
  (this->fields).objectsToPreload = pGVar1;
  func_?(&(this->fields).objectsToPreload,pGVar1);
  pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,0);
  (this->fields).objectsToPreloadTimes = pIVar2;
  func_?(&(this->fields).objectsToPreloadTimes,pIVar2);
  this_00 = (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>
                           );
  if (this_00 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Dictionary__
              );
    (this->fields).instantiatedObjects = this_00;
    func_?(&(this->fields).instantiatedObjects,this_00);
    this_01 = (Dictionary_2_System_Int32_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    if (this_01 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
      (this->fields).poolCursors = this_01;
      func_?(&(this->fields).poolCursors,this_01);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    key = (Object *)
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                    ((Object_1 *)sourceObject,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (this->fields).instantiatedObjects;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                        );
      if (bVar1 != 0) {
code_?:
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
            pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_1
                               (sourceObject,1,
                                CFX_AutoDestructShuriken__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_AutoDestructShuriken>_bool_____
                               );
            ppOVar4 = pOVar3->vector;
            uVar5 = 0;
            if (pOVar3 == (Object__Array *)0x0) goto code_?;
            for (; (int)uVar5 < (int)pOVar3->max_length; uVar5 = uVar5 + 1) {
              if (pOVar3->max_length <= uVar5) goto code_?;
              if (*ppOVar4 == (Object *)0x0) goto code_?;
              *(undefined1 *)&(*ppOVar4)[1].monitor = 1;
              ppOVar4 = ppOVar4 + 1;
            }
            pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_1
                               (sourceObject,1,
                                CFX_LightIntensityFade__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_LightIntensityFade>_bool_____
                               );
            ppOVar4 = pOVar3->vector;
            uVar5 = 0;
            if (pOVar3 == (Object__Array *)0x0) goto code_?;
            for (; (int)uVar5 < (int)pOVar3->max_length; uVar5 = uVar5 + 1) {
              if (pOVar3->max_length <= uVar5) goto code_?;
              if (*ppOVar4 == (Object *)0x0) goto code_?;
              *(undefined1 *)&(*ppOVar4)[3].monitor = 0;
              ppOVar4 = ppOVar4 + 1;
            }
            if ((_UNK_? == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) ||
               (this_03 = (List_1_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    (_UNK_?,(Int32Enum__Enum)key_00,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                    ), this_03 == (List_1_System_Object_ *)0x0))
            goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (this_03,(Object *)sourceObject,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                      );
            if (UNK_? != '\0') {
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                        ((Object_1 *)sourceObject,HideFlags__Enum_HideInHierarchy,(MethodInfo *)0x0)
              ;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 1);
        }
        return;
      }
      number = (int32_t)(this->fields).instantiatedObjects;
      this_02 = (LowLevelList_1_System_Object_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>
                               );
      if ((this_02 != (LowLevelList_1_System_Object_ *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    (this_02,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                    ),
         (Dictionary_2_System_Object_System_Object_ *)number !=
         (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)number,key,(Object *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Add_int__System__Collections__Generic__List<UnityEngine::GameObject>_
                  );
        this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).poolCursors;
        if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_01,key,(Object *)0x0,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
          sourceObject = (GameObject *)&UNK_?;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  if (sourceObject == (GameObject *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    key.m_value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                            ((Object_1 *)sourceObject,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (this->fields).instantiatedObjects;
    if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
    goto code_?;
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)key.m_value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      pDVar2 = (this->fields).instantiatedObjects;
      if ((pDVar2 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,key.m_value,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                             ), pOVar3 != (Object *)0x0)) {
        index = pOVar3[1].monitor;
        while (index = index + -1, -1 < (int)index) {
          pDVar2 = (this->fields).instantiatedObjects;
          if ((pDVar2 == (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) ||
             (this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,
                                   key.m_value,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                  ),
             this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
          goto code_?;
          obj = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_02,(int32_t)index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                          );
          pDVar2 = (this->fields).instantiatedObjects;
          if ((pDVar2 == (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) ||
             (this_03 = (List_1_System_Object_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,
                                   key.m_value,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                  ), this_03 == (List_1_System_Object_ *)0x0))
          goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    (this_03,(int32_t)index,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAt_int_
                    );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          key.m_value = (int32_t)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
        }
        pDVar2 = (this->fields).instantiatedObjects;
        if (pDVar2 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,key.m_value,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Remove_int_
                    );
          this_01 = (Dictionary_2_System_Int32_System_Single_ *)(this->fields).poolCursors;
          if (this_01 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__Remove
                      (this_01,key.m_value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Remove_int_);
            return;
          }
        }
      }
      goto code_?;
    }
    values = (String__Array *)func_?();
    if (values == (String__Array *)0x0) goto code_?;
    if ((StringLiteral__CFX_SpawnSystem_removeObjectsFr != (String *)0x0) &&
       (iVar4 = func_?(), iVar4 == 0)) goto code_?;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral__CFX_SpawnSystem_removeObjectsFr;
    func_?();
    pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)sourceObject,(MethodInfo *)0x0);
    if ((pSVar5 != (String *)0x0) && (iVar4 = func_?(), iVar4 == 0)) goto code_?;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = pSVar5;
    func_?();
    if ((StringLiteral___ID_ != (String *)0x0) && (iVar4 = func_?(), iVar4 == 0))
    goto code_?;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = StringLiteral___ID_;
    func_?();
    pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if ((pSVar5 != (String *)0x0) && (iVar4 = func_?(), iVar4 == 0)) goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = pSVar5;
    func_?();
    if ((::StringLiteral__ == (String *)0x0) || (iVar4 = func_?(), iVar4 != 0)) {
      if (4 < values->max_length) {
        values->vector[4] = ::StringLiteral__;
        func_?();
        pSVar5 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)pSVar5,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

