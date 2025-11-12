
/* Boolean Contains(RTMesh) */

bool Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb_Contains
               (RTMeshDb *this,RTMesh *rtMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (rtMesh != (RTMesh *)0x0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(this->fields)._meshes;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)(rtMesh->fields)._unityMesh,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                         ->klass->rgctx_data[0x21].method);
      return (byte)((uint)iVar1 >> 0x1f) ^ 1;
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  return 0;
}


/* Boolean Contains(Mesh) */

bool Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb_Contains_1
               (RTMeshDb *this,Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
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
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(this->fields)._meshes;
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (this_00,(Object *)unityMesh,
                           MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                           ->klass->rgctx_data[0x21].method);
        return (byte)((uint)iVar1 >> 0x1f) ^ 1;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 0;
}


/* RTMesh CreateRTMesh(Mesh) */

RTMesh * Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb_CreateRTMesh
                   (RTMeshDb *this,Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Add_UnityEngine__Mesh__RTG__RTMesh_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__RTMesh);
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
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_isReadable
                        (unityMesh,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pRVar2 = (RTMesh *)FUN_?(TypeInfo__RTG__RTMesh);
        RTMesh::RTMesh__ctor(pRVar2,unityMesh,(MethodInfo *)0x0);
        if (pRVar2 != (RTMesh *)0x0) {
          this_00 = (this->fields)._meshes;
          if (this_00 != (Dictionary_2_UnityEngine_Mesh_RTG_RTMesh_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)unityMesh,
                       (Object *)pRVar2,CONCAT31((int3)((uint)in_R9D >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Add_UnityEngine__Mesh__RTG__RTMesh_
                       ->klass->rgctx_data[0x22].method);
            return pRVar2;
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          pRVar2 = (RTMesh *)(*pcVar3)();
          return pRVar2;
        }
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__get_Item_UnityEngine__Mesh_
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
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._meshes;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (pDVar1,(Object *)unityMesh,
                           MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                           ->klass->rgctx_data[0x21].method);
        if (iVar2 < 0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Add_UnityEngine__Mesh__RTG__RTMesh_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__RTG__RTMesh);
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
          if ((unityMesh->fields)._.m_CachedPtr != (void *)0x0) {
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_isReadable
                              (unityMesh,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              pRVar4 = (RTMesh *)FUN_?(TypeInfo__RTG__RTMesh);
              RTMesh::RTMesh__ctor(pRVar4,unityMesh,(MethodInfo *)0x0);
              if (pRVar4 != (RTMesh *)0x0) {
                this_00 = (this->fields)._meshes;
                if (this_00 != (Dictionary_2_UnityEngine_Mesh_RTG_RTMesh_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            ((Dictionary_2_System_Object_System_Object_ *)this_00,
                             (Object *)unityMesh,(Object *)pRVar4,
                             CONCAT31((int3)((uint)in_R9D >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Add_UnityEngine__Mesh__RTG__RTMesh_
                             ->klass->rgctx_data[0x22].method);
                  return pRVar4;
                }
                goto DAT_?;
              }
            }
          }
          return (RTMesh *)0x0;
        }
        pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)(this->fields)._meshes;
        if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)0x0) {
          uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                            (pDVar1,(Object *)unityMesh,
                             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__get_Item_UnityEngine__Mesh_
                             ->klass->rgctx_data[0x21].method);
          if ((int)uVar5 < 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                      ((Object *)unityMesh,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            pRVar4 = (RTMesh *)(*pcVar6)();
            return pRVar4;
          }
          pDVar7 = (pDVar1->fields)._entries;
          if (pDVar7 != (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                         *)0x0) {
            if (uVar5 < (uint)pDVar7->max_length) {
              return (RTMesh *)pDVar7->vector[(int)uVar5].value;
            }
            FUN_?();
            pcVar6 = (code *)swi(3);
            pRVar4 = (RTMesh *)(*pcVar6)();
            return pRVar4;
          }
          FUN_?();
          pcVar6 = (code *)swi(3);
          pRVar4 = (RTMesh *)(*pcVar6)();
          return pRVar4;
        }
      }
DAT_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      pRVar4 = (RTMesh *)(*pcVar6)();
      return pRVar4;
    }
  }
  return (RTMesh *)0x0;
}


/* Void OnMeshWillBeDestroyed(Mesh) */

void Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb_OnMeshWillBeDestroyed
               (RTMeshDb *this,Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Remove_UnityEngine__Mesh_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._meshes;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)unityMesh,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__ContainsKey_UnityEngine__Mesh_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetMeshDirty(Mesh) */

void Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb_SetMeshDirty
               (RTMeshDb *this,Mesh *unityMesh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__TryGetValue_UnityEngine__Mesh__RTG__RTMesh__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._meshes;
  pRStackX_8 = (RTMesh *)0x0;
  if (this_00 != (Dictionary_2_UnityEngine_Mesh_RTG_RTMesh_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)unityMesh,
                       (Object **)&pRStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__TryGetValue_UnityEngine__Mesh__RTG__RTMesh__
                      );
    if (bVar1 != 0) {
      if (pRStackX_8 == (RTMesh *)0x0) goto code_?;
      RTMesh::RTMesh_SetDirty(pRStackX_8,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RTMeshDb() */

void Assembly-CSharp.dll::RTG::RTMeshDb::RTMeshDb__ctor(RTMeshDb *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::RTMeshDb>__Singleton__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::RTMeshDb>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Mesh,_RTG::RTMesh>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._meshes = (Dictionary_2_UnityEngine_Mesh_RTG_RTMesh_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::RTMeshDb>->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

