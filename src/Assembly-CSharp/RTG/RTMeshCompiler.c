
/* Void CompileEntireScene() */

void Assembly-CSharp.dll::RTG::RTMeshCompiler::RTMeshCompiler_CompileEntireScene(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
  if (pOVar1 != (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    UnityEngine__GameObject__MethodInfo__UnityEngine__Object__FindObjectsByType<UnityEngine::GameObject>_UnityEngine__FindObjectsSortMode_____
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_FindObjectsByType_2
                       (FindObjectsSortMode__Enum_None,
                        UnityEngine__GameObject__MethodInfo__UnityEngine__Object__FindObjectsByType<UnityEngine::GameObject>_UnityEngine__FindObjectsSortMode_____
                       );
    uVar3 = 0;
    if (pOVar2 != (Object__Array *)0x0) {
      ppOVar4 = pOVar2->vector;
      while( true ) {
        if ((int)pOVar2->max_length <= (int)uVar3) {
          return;
        }
        if ((uint)pOVar2->max_length <= uVar3) break;
        RTMeshCompiler_CompileForObject((GameObject *)*ppOVar4,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        ppOVar4 = ppOVar4 + 1;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean CompileForObject(GameObject) */

bool Assembly-CSharp.dll::RTG::RTMeshCompiler::RTMeshCompiler_CompileForObject
               (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObject == (GameObject *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (gameObject->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)gameObject,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  cVar5 = (*pcRam_?)(pvVar3);
  if (cVar5 == '\0') {
    if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    unityMesh = GameObjectEx::GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
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
    if (unityMesh != (Mesh *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((unityMesh->fields)._.m_CachedPtr != (void *)0x0) {
        if (*(int *)&(TypeInfo__RTG__Singleton<RTG::RTMeshDb>->_1).field_0x1c == 0) {
          FUN_?();
        }
        this_00 = (RTMeshDb *)
                  Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                            (MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
        if (this_00 != (RTMeshDb *)0x0) {
          pRVar6 = RTMeshDb::RTMeshDb_GetRTMesh(this_00,unityMesh,(MethodInfo *)0x0);
          if (pRVar6 == (RTMesh *)0x0) {
            return 0;
          }
          this = (pRVar6->fields)._meshTree;
          if (this != (MeshTree *)0x0) {
            if ((this->fields)._isBuilt == 0) {
              MeshTree::MeshTree_Build(this,(MethodInfo *)0x0);
            }
            return 1;
          }
        }
        goto code_?;
      }
    }
  }
  return 0;
}

