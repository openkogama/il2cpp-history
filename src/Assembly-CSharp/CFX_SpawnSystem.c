
/* Void Awake() */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_Awake
               (CFX_SpawnSystem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = TypeInfo__CFX_SpawnSystem->static_fields->instance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    this = (CFX_SpawnSystem *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_CFX_SpawnSystem__There_should_on,(MethodInfo *)0x0);
  }
  TypeInfo__CFX_SpawnSystem->static_fields->instance = this;
  return;
}


/* GameObject GetNextObject(GameObject, Boolean) */

GameObject *
Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_GetNextObject
          (GameObject *sourceObj,bool activateObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (sourceObj == (GameObject *)0x0) {
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
    key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                    ((Object_1 *)sourceObj,(MethodInfo *)0x0);
    pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
    if ((pCVar1 == (CFX_SpawnSystem *)0x0) ||
       (pDVar2 = (pCVar1->fields).poolCursors,
       pDVar2 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) goto code_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
            Dictionary_2_System_Int32_System_Int32__ContainsKey
                      (pDVar2,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                      );
    if (bVar3 != 0) {
      pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
      if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
         (pDVar2 = (pCVar1->fields).poolCursors,
         pDVar2 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
        index = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__get_Item
                          (pDVar2,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                          );
        pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
        if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
           (pDVar2 = (pCVar1->fields).poolCursors,
           pDVar2 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
          iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__get_Item
                            (pDVar2,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                            );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__set_Item
                    (pDVar2,key,iVar4 + 1,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                    );
          pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
          if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
             (pDVar2 = (pCVar1->fields).poolCursors,
             pDVar2 != (Dictionary_2_System_Int32_System_Int32_ *)0x0)) {
            iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Int32]::Dictionary_2_System_Int32_System_Int32__get_Item
                              (pDVar2,key,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                              );
            pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
            if ((pCVar1 != (CFX_SpawnSystem *)0x0) &&
               ((pDVar6 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)(pCVar1->fields).instantiatedObjects,
                pDVar6 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0 &&
                (pTVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                    (pDVar6,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                    ), pTVar7 != (TerrainUtility_TerrainMap *)0x0)))) {
              pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pTVar7
                                  ,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                                 );
              if ((int)pOVar8 <= iVar5) {
                pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
                if ((pCVar1 == (CFX_SpawnSystem *)0x0) ||
                   (pDVar2 = (pCVar1->fields).poolCursors,
                   pDVar2 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__set_Item
                          (pDVar2,key,0,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                          );
              }
              pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
              if (((pCVar1 != (CFX_SpawnSystem *)0x0) &&
                  (pDVar6 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                             *)(pCVar1->fields).instantiatedObjects,
                  pDVar6 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                             *)0x0)) &&
                 (pTVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                     (pDVar6,key,
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                     ), pTVar7 != (TerrainUtility_TerrainMap *)0x0)) {
                pGVar9 = (GameObject *)
                          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pTVar7,
                                     index,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                                    );
                activateObject = (bool)(iVar4 + 1);
                if (activateObject == 0) {
                  return pGVar9;
                }
                if (pGVar9 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar9,1,(MethodInfo *)0x0);
                  return pGVar9;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    args = (Object__Array *)func_?(TypeInfo__System__Object);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral__CFX_SpawnSystem_GetNextPoolObje != (String *)0x0) &&
       (iVar10 = func_?(), iVar10 == 0)) goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral__CFX_SpawnSystem_GetNextPoolObje;
    pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                        ((Object_1 *)sourceObj,(MethodInfo *)0x0);
    if ((pSVar11 != (String *)0x0) && (iVar10 = func_?(), iVar10 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar11;
    if ((StringLiteral___ID_ != (String *)0x0) && (iVar10 = func_?(), iVar10 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral___ID_;
    pOVar8 = (Object *)func_?();
    if ((pOVar8 != (Object *)0x0) && (iVar10 = func_?(), iVar10 == 0))
    goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar8;
    if ((::StringLiteral__ == (String *)0x0) || (iVar10 = func_?(), iVar10 != 0)) {
      if (4 < args->max_length) {
        args->vector[4] = (Object *)::StringLiteral__;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar11 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)pSVar11,(MethodInfo *)0x0);
        return (GameObject *)0x0;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pGVar9 = (GameObject *)(*pcVar12)();
  return pGVar9;
}


/* Void PreloadObject(GameObject, Int32) */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_PreloadObject
               (GameObject *sourceObj,int32_t poolSize,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = TypeInfo__CFX_SpawnSystem->static_fields->instance;
  if (this != (CFX_SpawnSystem *)0x0) {
    CFX_SpawnSystem_addObjectToPool(this,sourceObj,poolSize,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
      if (pGVar2 == (GameObject__Array *)0x0) break;
      if (pGVar2->max_length <= uVar1) goto code_?;
      sourceObject = *(GameObject **)((int)pGVar2->vector + iVar3 + -0x10);
      pIVar4 = (this->fields).objectsToPreloadTimes;
      if (pIVar4 == (Int32__Array *)0x0) break;
      if (pIVar4->max_length <= uVar1) goto code_?;
      number = *(int32_t *)((int)pIVar4->vector + iVar3 + -0x10);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
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
  func_?(0);
code_?:
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UnloadObjects(GameObject) */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_UnloadObjects
               (GameObject *sourceObj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = TypeInfo__CFX_SpawnSystem->static_fields->instance;
  if (this != (CFX_SpawnSystem *)0x0) {
    CFX_SpawnSystem_removeObjectsFromPool(this,sourceObj,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* CFX_SpawnSystem() */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem__ctor
               (CFX_SpawnSystem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject__Array *)func_?(TypeInfo__UnityEngine__GameObject,0);
  (this->fields).objectsToPreload = pGVar1;
  pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,0);
  (this->fields).objectsToPreloadTimes = pIVar2;
  this_00 = (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Dictionary__
            );
  (this->fields).instantiatedObjects = this_00;
  this_01 = (Dictionary_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  (this->fields).poolCursors = this_01;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Void addObjectToPool(GameObject, Int32) */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_addObjectToPool
               (CFX_SpawnSystem *this,GameObject *sourceObject,int32_t number,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (sourceObject != (GameObject *)0x0) {
    key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                    ((Object_1 *)sourceObject,(MethodInfo *)0x0);
    pDVar1 = (this->fields).instantiatedObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                        );
      if (bVar2 != 0) {
code_?:
        if (0 < number) {
          do {
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            this_03 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                ((XpBoostParticlePreviewer *)sourceObject,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                );
            if (this_03 == (XpBoostParticlePreviewer *)0x0) goto code_?;
            puVar3 = &UNK_?;
            sourceObject = (GameObject *)this_03;
            pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_20
                               ((GameObject *)this_03,1,
                                CFX_AutoDestructShuriken__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_AutoDestructShuriken>_bool_____
                               );
            iVar5 = 0;
            while( true ) {
              if (pCVar4 == (CFX_LightIntensityFade__Array *)0x0) goto code_?;
              if ((int)pCVar4->max_length <= iVar5) break;
              iVar6 = func_?();
              if (iVar6 == 0) goto code_?;
              *(undefined1 *)(iVar6 + 0xc) = 1;
              iVar5 = iVar5 + 1;
            }
            pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_20
                               ((GameObject *)this_03,1,
                                CFX_LightIntensityFade__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<CFX_LightIntensityFade>_bool_____
                               );
            iVar5 = 0;
            while( true ) {
              if (pCVar4 == (CFX_LightIntensityFade__Array *)0x0) goto code_?;
              if ((int)pCVar4->max_length <= iVar5) break;
              iVar6 = func_?();
              if (iVar6 == 0) goto code_?;
              *(undefined1 *)(iVar6 + 0x1c) = 0;
              iVar5 = iVar5 + 1;
            }
            this_01 = *(Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        **)&(this_03->fields).isParticlesPlaying;
            if (this_01 ==
                (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) goto code_?;
            this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                (this_01,(int32_t)sourceObject,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                );
            if (this_04 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_04,(UIPushOption__Enum)this_03,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                      );
            if (*(char *)&(this_03->fields).xpBoostParticles != '\0') {
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                        ((Object_1 *)this_03,HideFlags__Enum_HideInHierarchy,(MethodInfo *)0x0);
            }
          } while ((int)(puVar3 + 1) < 0xADDR);
        }
        return;
      }
      pDVar1 = (this->fields).instantiatedObjects;
      this_02 = (List_1_UnityEngine_Vector4_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>
                               );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
      if (pDVar1 != (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(int32_t)this_02,
                   (Object *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Add_int__System__Collections__Generic__List<UnityEngine::GameObject>_
                  );
        this_00 = (this->fields).poolCursors;
        if (this_00 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
          number = (int32_t)
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
          Dictionary_2_System_Int32_System_Int32__Add
                    (this_00,(int32_t)this_02,0,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Add_int__int_);
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean get_AllObjectsLoaded() */

bool Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_get_AllObjectsLoaded(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CFX_SpawnSystem->static_fields->instance;
  if (pCVar1 != (CFX_SpawnSystem *)0x0) {
    return (pCVar1->fields).allObjectsLoaded;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void removeObjectsFromPool(GameObject) */

void Assembly-CSharp.dll::CFX_SpawnSystem::CFX_SpawnSystem_removeObjectsFromPool
               (CFX_SpawnSystem *this,GameObject *sourceObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                    ((Object_1 *)sourceObject,(MethodInfo *)0x0);
    this_00 = (this->fields).instantiatedObjects;
    if (this_00 == (Dictionary_2_System_Int32_List_1_UnityEngine_GameObject_ *)0x0)
    goto code_?;
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).instantiatedObjects;
      if ((pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) &&
         (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDVar2,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                             ), pTVar3 != (TerrainUtility_TerrainMap *)0x0)) {
        pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pTVar3,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                           );
        while (pOVar4 = (Object *)((int)&pOVar4[-1].monitor + 3), -1 < (int)pOVar4) {
          pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).instantiatedObjects;
          if ((pDVar2 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0) ||
             (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                 (pDVar2,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                 ), pTVar3 == (TerrainUtility_TerrainMap *)0x0))
          goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
          IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pTVar3,(int32_t)pOVar4,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                    );
          pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).instantiatedObjects;
          if ((pDVar2 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0) ||
             (pTVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                 (pDVar2,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__get_Item_int_
                                 ), pTVar3 == (TerrainUtility_TerrainMap *)0x0))
          goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                    ((List_1_MVPlayer_ *)pTVar3,(int32_t)pOVar4,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__RemoveAt_int_
                    );
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)0x0,(MethodInfo *)0x0);
        }
        pDVar2 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).instantiatedObjects;
        if (pDVar2 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                    (pDVar2,key,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<UnityEngine::GameObject>_>__Remove_int_
                    );
          this_01 = (this->fields).poolCursors;
          if (this_01 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
            Dictionary_2_System_Int32_System_Int32__Remove
                      (this_01,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Remove_int_);
            return;
          }
        }
      }
      goto code_?;
    }
    args = (Object__Array *)func_?();
    if (args == (Object__Array *)0x0) goto code_?;
    if (StringLiteral__CFX_SpawnSystem_removeObjectsFr != (String *)0x0) {
      sourceObject = (GameObject *)&UNK_?;
      iVar5 = func_?();
      if (iVar5 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral__CFX_SpawnSystem_removeObjectsFr;
    pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)sourceObject,(MethodInfo *)0x0);
    if ((pSVar6 != (String *)0x0) && (iVar5 = func_?(), iVar5 == 0)) goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pSVar6;
    if ((StringLiteral___ID_ != (String *)0x0) && (iVar5 = func_?(), iVar5 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral___ID_;
    pOVar4 = (Object *)func_?();
    if ((pOVar4 != (Object *)0x0) && (iVar5 = func_?(), iVar5 == 0)) goto code_?;
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar4;
    if ((::StringLiteral__ == (String *)0x0) || (iVar5 = func_?(), iVar5 != 0)) {
      if (4 < args->max_length) {
        args->vector[4] = (Object *)::StringLiteral__;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar6 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)pSVar6,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

