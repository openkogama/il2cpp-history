
/* Void CompileEntireScene() */

void Assembly-CSharp.dll::RTG::RTMeshCompiler::RTMeshCompiler_CompileEntireScene(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTScene>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTScene>);
  }
  this = (RTScene *)
         MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                   (MethodInfo__RTG__MonoSingleton<RTG::RTScene>__get_Get__);
  if (this != (RTScene *)0x0) {
    pGVar1 = RTScene::RTScene_GetSceneObjects(this,(MethodInfo *)0x0);
    uVar2 = 0;
    if (pGVar1 != (GameObject__Array *)0x0) {
      ppGVar3 = pGVar1->vector;
      while( true ) {
        if ((int)pGVar1->max_length <= (int)uVar2) {
          return;
        }
        if (pGVar1->max_length <= uVar2) break;
        RTMeshCompiler_CompileForObject(*ppGVar3,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppGVar3 = ppGVar3 + 1;
      }
      func_?();
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean CompileForObject(GameObject) */

bool Assembly-CSharp.dll::RTG::RTMeshCompiler::RTMeshCompiler_CompileForObject
               (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__GameObjectEx);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
    func_?(&TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
    cRam_? = '\x01';
  }
  if (gameObject == (GameObject *)0x0) goto code_?;
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_isStatic
                    (gameObject,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  if ((TypeInfo__RTG__GameObjectEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__GameObjectEx);
  }
  this_00 = GameObjectEx::GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  if ((TypeInfo__RTG__Singleton<RTG::RTMeshDb>->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar2 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                     (MethodInfo__RTG__Singleton<RTG::RTMeshDb>__get_Get__);
  if (pOVar2 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  if (pOVar2[1].klass == (Object__Class *)0x0) goto code_?;
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pOVar2[1].klass
                     ,(Object *)this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                    );
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&TypeInfo__RTG__RTMesh);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (this_00 == (Mesh *)0x0) goto code_?;
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_isReadable
                        (this_00,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        this_01.m_Index = func_?();
        RTMesh::RTMesh__ctor((RTMesh *)this_01.m_Index,this_00,(MethodInfo *)0x0);
        if ((RTMesh *)this_01.m_Index != (RTMesh *)0x0) {
          if (pOVar2[1].klass == (Object__Class *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pOVar2[1].klass,(Object *)this_00,
                     (Object *)this_01.m_Index,
                     MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Add_UnityEngine__Mesh__RTG__RTMesh_
                    );
          goto code_?;
        }
      }
    }
    this_01.m_Index = 0;
  }
  else {
    if (pOVar2[1].klass == (Object__Class *)0x0) goto code_?;
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                         pOVar2[1].klass,(Object *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__get_Item_UnityEngine__Mesh_
                        );
  }
code_?:
  if ((RTMesh *)this_01.m_Index == (RTMesh *)0x0) {
    return 0;
  }
  this = (((RTMesh *)this_01.m_Index)->fields)._meshTree;
  if (this != (MeshTree *)0x0) {
    if ((this->fields)._isBuilt == 0) {
      MeshTree::MeshTree_Build(this,(MethodInfo *)0x0);
    }
    return 1;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}

