
/* Boolean Contains(RTMesh) */

bool Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb_Contains
               (RTMeshDb *this,RTMesh *rtMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (rtMesh != (RTMesh *)0x0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._meshes
    ;
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_00,(Object *)(rtMesh->fields)._unityMesh,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                        );
      return bVar1;
    }
    uVar2 = func_?(&stack0xfffffff0);
    func_?(uVar2);
    pcVar3 = (code *)swi(3);
    bVar1 = (*pcVar3)();
    return bVar1;
  }
  return 0;
}


/* Boolean Contains(Mesh) */

bool Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb_Contains_1
               (RTMeshDb *this,Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)unityMesh,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._meshes
    ;
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                        (this_00,(Object *)unityMesh,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                        );
      return bVar1;
    }
    uVar2 = func_?(&stack0xfffffffc);
    func_?(uVar2);
    pcVar3 = (code *)swi(3);
    bVar1 = (*pcVar3)();
    return bVar1;
  }
  return 0;
}


/* RTMesh CreateRTMesh(Mesh) */

RTMesh * Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb_CreateRTMesh
                   (RTMeshDb *this,Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Add_UnityEngine__Mesh__RTG__RTMesh_
                   );
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
                    ((Object_1 *)unityMesh,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (unityMesh == (Mesh *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      pRVar3 = (RTMesh *)(*pcVar2)();
      return pRVar3;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_isReadable
                      (unityMesh,(MethodInfo *)0x0);
    pRVar4 = TypeInfo__RTG__RTMesh;
    if (bVar1 != 0) {
      pRVar3 = (RTMesh *)func_?();
      RTMesh::RTMesh__ctor(pRVar3,unityMesh,(MethodInfo *)0x0);
      if (pRVar3 != (RTMesh *)0x0) {
        this_00 = (Dictionary_2_System_Object_System_Object_ *)(pRVar4->_0).name;
        if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,(Object *)unityMesh,(Object *)pRVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Add_UnityEngine__Mesh__RTG__RTMesh_
                    );
          return pRVar3;
        }
        goto code_?;
      }
    }
  }
  return (RTMesh *)0x0;
}


/* RTMesh GetRTMesh(Mesh) */

RTMesh * Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb_GetRTMesh
                   (RTMeshDb *this,Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__get_Item_UnityEngine__Mesh_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)unityMesh,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return (RTMesh *)0x0;
  }
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._meshes;
  if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar2,(Object *)unityMesh,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                      );
    if (bVar1 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)unityMesh,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if (unityMesh == (Mesh *)0x0) goto code_?;
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_isReadable
                          (unityMesh,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pRVar3 = (RTMesh *)func_?();
          RTMesh::RTMesh__ctor(pRVar3,unityMesh,(MethodInfo *)0x0);
          if (pRVar3 != (RTMesh *)0x0) {
            this_00 = (this->fields)._meshes;
            if (this_00 != (Dictionary_2_UnityEngine_Mesh_RTG_RTMesh_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)unityMesh,
                         (Object *)pRVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Add_UnityEngine__Mesh__RTG__RTMesh_
                        );
              return pRVar3;
            }
            goto code_?;
          }
        }
      }
      return (RTMesh *)0x0;
    }
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._meshes;
    if (pDVar2 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (pDVar2,(Object *)unityMesh,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__get_Item_UnityEngine__Mesh_
                        );
      return (RTMesh *)TVar4.m_Index;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pRVar3 = (RTMesh *)(*pcVar5)();
  return pRVar3;
}


/* Void OnMeshWillBeDestroyed(Mesh) */

void Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb_OnMeshWillBeDestroyed
               (RTMeshDb *this,Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Remove_UnityEngine__Mesh_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._meshes;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (this_00,(Object *)unityMesh,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                      );
    if (bVar1 != 0) {
      this_01 = (this->fields)._meshes;
      if (this_01 == (Dictionary_2_UnityEngine_Mesh_RTG_RTMesh_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Remove
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)unityMesh,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Remove_UnityEngine__Mesh_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMeshDirty(Mesh) */

void Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb_SetMeshDirty
               (RTMeshDb *this,Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__TryGetValue_UnityEngine__Mesh__RTG__RTMesh__
                   );
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  this_00 = (this->fields)._meshes;
  if (this_00 != (Dictionary_2_UnityEngine_Mesh_RTG_RTMesh_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)unityMesh,
                       &pOStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__TryGetValue_UnityEngine__Mesh__RTG__RTMesh__
                      );
    pOVar3 = pOStack_1;
    if (bVar2 == 0) {
      return;
    }
    if ((pOStack_1 != (Object *)0x0) && (pOStack_1[1].klass != (Object__Class *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                         ((Mesh *)pOStack_1[1].klass,(MethodInfo *)0x0);
      pOVar3[1].monitor = (MonitorData *)pVVar4;
      func_?();
      if (pOVar3[1].klass != (Object__Class *)0x0) {
        pOVar5 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_triangles
                           ((Mesh *)pOVar3[1].klass,(MethodInfo *)0x0);
        pOVar3[2].klass = pOVar5;
        func_?(pOVar3 + 2,pOVar5);
        if (pOVar3[2].klass != (Object__Class *)0x0) {
          pOVar3[2].monitor = (MonitorData *)((int)((pOVar3[2].klass)->_0).namespaze / 3);
          if (pOVar3[1].klass != (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_RecalculateBounds
                      ((Mesh *)pOVar3[1].klass,(MethodInfo *)0x0);
            if (pOVar3[1].klass != (Object__Class *)0x0) {
              pBVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_bounds
                                 (&BStack_7,(Mesh *)pOVar3[1].klass,(MethodInfo *)0x0);
              pOVar5 = (Object__Class *)0x0;
              pMVar8 = (MonitorData *)0x0;
              AABB::AABB__ctor_1((AABB *)&stack0xffffffc4,*pBVar6,(MethodInfo *)0x0);
              pMVar9 = pOVar3[6].monitor;
              pOVar3[3].klass = pOVar5;
              pOVar3[3].monitor = pMVar8;
              pOVar3[4].klass = (Object__Class *)0x0;
              pOVar3[4].monitor = (MonitorData *)0x0;
              pOVar3[5].klass = (Object__Class *)0x0;
              pOVar3[5].monitor = (MonitorData *)0x0;
              pOVar3[6].klass = (Object__Class *)0x0;
              if (pMVar9 != (MonitorData *)0x0) {
                if (cRam_? == '\0') {
                  func_?(&MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
                  func_?(&TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
                  cRam_? = '\x01';
                }
                pMVar9[0x1c] = (MonitorData)0x0;
                this_01 = (SphereTree_1_System_Object_ *)
                          func_?(TypeInfo__RTG__SphereTree<RTG::MeshTriangle>);
                SphereTree`1[System::Object]::SphereTree_1_System_Object___ctor
                          (this_01,MethodInfo__RTG__SphereTree<RTG::MeshTriangle>__SphereTree__);
                *(SphereTree_1_System_Object_ **)(pMVar9 + 0xc) = this_01;
                func_?(pMVar9 + 0xc,this_01);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* RTMeshDb() */

void Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb__ctor(RTMeshDb *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>
                   );
    func_?(&MethodInfo__RTG__Singleton<RTG::RTMeshDb>__Singleton__);
    func_?(&TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Dictionary__
            );
  (this->fields)._meshes = (Dictionary_2_UnityEngine_Mesh_RTG_RTMesh_ *)this_00;
  func_?(&this->fields,this_00);
  if ((TypeInfo__RTG__Singleton<RTG::RTMeshDb>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
  }
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,
             MethodInfo__RTG__Singleton<RTG::RTMeshDb>__Singleton__);
  return;
}

