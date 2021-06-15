
/* Void CubeModelToFile(MVCubeModelBase) */

void Assembly-CSharp.dll::ObjExporterScript::ObjExporterScript_CubeModelToFile
               (MVCubeModelBase *cm,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar4 = (undefined4 *)&stack0xffffffc4;
  func_?();
  if (cm != (MVCubeModelBase *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    pMVar5 = MVMovingPlatformNode::MVMovingPlatformNode_get_Next
                       ((MVMovingPlatformNode *)cm,(MethodInfo *)0x0);
    if (pMVar5 != (MVMovingPlatformNode *)0x0) {
      iVar6 = func_?(0);
      uStack_1 = 0;
      while (iVar6 != 0) {
        cVar7 = func_?(1);
        if (cVar7 == '\0') {
          *puVar4 = 0x9f;
          uStack_1 = 0xffffffff;
          iVar6 = func_?();
          if (iVar6 != 0) {
            func_?(0);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        piVar8 = (int *)func_?(0);
        if (piVar8 == (int *)0x0) break;
        if (*(Il2CppClass **)(*piVar8 + 0x20) !=
            (
            TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_UnityEngine::GameObject>
            ->_0).element_class) goto code_?;
        func_?();
        this = (GameObject *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items
                         ((Collection_1_VoxelHit_ *)&stack0xffffffd0,
                          MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_UnityEngine::GameObject>__get_Value__
                         );
        if (this == (GameObject *)0x0) break;
        mf = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       (this,
                        UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                       );
        pCVar9 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)cm,(MethodInfo *)0x0);
        if (pCVar9 == (CelestialParam *)0x0) break;
        pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                           ((Object_1 *)pCVar9,in_stack_11);
        in_stack_11 = (MethodInfo *)&UNK_?;
        pOVar12 = (Object_1 *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)&stack0xffffffd0,
                            MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_UnityEngine::GameObject>__get_Value__
                           );
        if (pOVar12 == (Object_1 *)0x0) break;
        unaff_ESI = (MethodInfo *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                              (pOVar12,in_stack_13);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        in_stack_13 = unaff_ESI;
        pSVar10 = mscorlib.dll::System::String::String_Concat_3
                           (pSVar10,(String *)unaff_ESI,StringLiteral__obj,(MethodInfo *)0x0);
        ObjExporterScript_MeshToFile((MeshFilter *)mf,pSVar10,0,(MethodInfo *)0x0);
        pCVar9 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)cm,(MethodInfo *)0x0);
        if (pCVar9 == (CelestialParam *)0x0) break;
        unaff_ESI = (MethodInfo *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                              ((Object_1 *)pCVar9,method_00);
        method_00 = (MethodInfo *)&UNK_?;
        pOVar12 = (Object_1 *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)&stack0xffffffd0,
                            MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_UnityEngine::GameObject>__get_Value__
                           );
        if (pOVar12 == (Object_1 *)0x0) break;
        pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                           (pOVar12,(MethodInfo *)0x0);
        unaff_ESI = (MethodInfo *)
                    mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_Saved_obj_file_,(String *)unaff_ESI,pSVar10,
                               StringLiteral__obj,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        puVar4 = (undefined4 *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)unaff_ESI,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
code_?:
  func_?();
  func_?(unaff_ESI);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void MeshToFile(MeshFilter, String, Boolean) */

void Assembly-CSharp.dll::ObjExporterScript::ObjExporterScript_MeshToFile
               (MeshFilter *mf,String *filename,bool append,MethodInfo *method)

{
  iStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  iStack_1 = 0;
  this = (StreamWriter *)func_?(TypeInfo__System__IO__StreamWriter);
  mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor_4
            (this,filename,append,(MethodInfo *)0x0);
  iStack_1._0_1_ = 1;
  ObjExporterScript_MeshToString(mf,(MethodInfo *)0x0);
  if (this != (StreamWriter *)0x0) {
    (*(code *)(this->klass->vtable).WriteLine_1.method)();
    iStack_1 = (uint)iStack_1._1_3_ << 8;
    if (this != (StreamWriter *)0x0) {
      func_?();
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String MeshToString(MeshFilter) */

String * Assembly-CSharp.dll::ObjExporterScript::ObjExporterScript_MeshToString
                   (MeshFilter *mf,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (mf != (MeshFilter *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                     (mf,(MethodInfo *)0x0);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                        ((Component_1 *)mf,
                         UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                        );
    if (this_00 != (MVInteractableBase *)0x0) {
      pMStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                             ((Renderer *)this_00,(MethodInfo *)0x0);
      pSVar2 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
      pSStack_3 = pSVar2;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor_2(pSVar2,(MethodInfo *)0x0);
      if (pSVar2 != (StringBuilder *)0x0) {
        pSVar4 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                           (pSVar2,StringLiteral_g_,(MethodInfo *)0x0);
        pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                           ((Object_1 *)mf,(MethodInfo *)0x0);
        if (((pSVar4 != (StringBuilder *)0x0) &&
            (pSVar4 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                (pSVar4,pSVar5,(MethodInfo *)0x0), pSVar4 != (StringBuilder *)0x0))
           && (mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                         (pSVar4,StringLiteral_u000A,(MethodInfo *)0x0), this != (Mesh *)0x0)) {
          pCStack_6 = (Color__Array *)
                       UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                 (this,(MethodInfo *)0x0);
          uVar7 = 0;
          if (pCStack_6 != (Color__Array *)0x0) {
            pCVar8 = pCStack_6->vector;
            for (; (int)uVar7 < (int)pCStack_6->max_length; uVar7 = uVar7 + 1) {
              if (pCStack_6->max_length <= uVar7) goto code_?;
              pCVar9 = (Color__Array *)pCVar8->b;
              uVar10._0_4_ = pCVar8->r;
              uVar10._4_4_ = pCVar8->g;
              pCStack_11 = (Color__Array *)(undefined4)uVar10;
              pOStack_12 = (Object *)func_?(TypeInfo__System__Single,&pCStack_11);
              pVStack_13 = (Vector3__Array *)((ulonglong)uVar10 >> 0x20);
              pOStack_14 = (Object *)func_?(TypeInfo__System__Single,&pVStack_13);
              pCStack_15 = pCVar9;
              pCStack_16 = (Color__Array *)func_?(TypeInfo__System__Single,&pCStack_15);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSVar5 = mscorlib.dll::System::String::String_Format_2
                                 (StringLiteral_v__0___1___2_u000A,pOStack_12,pOStack_14,
                                  (Object *)pCStack_16,(MethodInfo *)0x0);
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                        (pSVar2,pSVar5,(MethodInfo *)0x0);
              pCVar8 = (Color *)&pCVar8->a;
            }
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                      (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
            pVStack_13 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_normals
                                  (this,(MethodInfo *)0x0);
            uVar7 = 0;
            if (pVStack_13 != (Vector3__Array *)0x0) {
              pVVar17 = pVStack_13->vector;
              for (; (int)uVar7 < (int)pVStack_13->max_length; uVar7 = uVar7 + 1) {
                if (pVStack_13->max_length <= uVar7) goto code_?;
                pOVar18 = (Object *)pVVar17->z;
                uVar19._0_4_ = pVVar17->x;
                uVar19._4_4_ = pVVar17->y;
                pCStack_6 = (Color__Array *)(undefined4)uVar19;
                pCStack_11 = (Color__Array *)func_?(TypeInfo__System__Single,&pCStack_6);
                pOStack_12 = (Object *)((ulonglong)uVar19 >> 0x20);
                pCStack_15 = (Color__Array *)func_?(TypeInfo__System__Single,&pOStack_12);
                pOStack_14 = pOVar18;
                pCStack_16 = (Color__Array *)func_?(TypeInfo__System__Single,&pOStack_14);
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?(TypeInfo__System__String);
                }
                pSVar5 = mscorlib.dll::System::String::String_Format_2
                                   (StringLiteral_vn__0___1___2_u000A,(Object *)pCStack_11,
                                    (Object *)pCStack_15,(Object *)pCStack_16,(MethodInfo *)0x0);
                mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                          (pSVar2,pSVar5,(MethodInfo *)0x0);
                pVVar17 = pVVar17 + 1;
              }
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                        (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
              pCStack_15 = (Color__Array *)
                           UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv
                                     (this,(MethodInfo *)0x0);
              uVar7 = 0;
              if (pCStack_15 != (Color__Array *)0x0) {
                pCVar8 = pCStack_15->vector;
                for (; (int)uVar7 < (int)pCStack_15->max_length; uVar7 = uVar7 + 1) {
                  if (pCStack_15->max_length <= uVar7) goto code_?;
                  pCStack_6 = (Color__Array *)pCVar8->r;
                  pOStack_12 = (Object *)pCVar8->g;
                  pCStack_16 = (Color__Array *)func_?(TypeInfo__System__Single,&pCStack_6)
                  ;
                  pOStack_14 = pOStack_12;
                  pOStack_12 = (Object *)func_?(TypeInfo__System__Single,&pOStack_14);
                  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                     && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                    func_?(TypeInfo__System__String);
                  }
                  pSVar5 = mscorlib.dll::System::String::String_Format_1
                                     (StringLiteral_vt__0___1_u000A,(Object *)pCStack_16,pOStack_12,
                                      (MethodInfo *)0x0);
                  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                            (pSVar2,pSVar5,(MethodInfo *)0x0);
                  pCVar8 = (Color *)&pCVar8->b;
                }
                mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                          (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv2
                                   (this,(MethodInfo *)0x0);
                iVar21 = 0;
                if (pVVar20 != (Vector2__Array *)0x0) {
                  for (; iVar21 < (int)pVVar20->max_length; iVar21 = iVar21 + 1) {
                    puVar22 = (undefined4 *)func_?(iVar21);
                    pOStack_12 = (Object *)puVar22[1];
                    pCStack_6 = (Color__Array *)*puVar22;
                    pCStack_16 = (Color__Array *)
                                 func_?(TypeInfo__System__Single,&pCStack_6);
                    pOStack_14 = pOStack_12;
                    pOStack_12 = (Object *)func_?(TypeInfo__System__Single,&pOStack_14);
                    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) !=
                         0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                      func_?(TypeInfo__System__String);
                    }
                    pSVar5 = mscorlib.dll::System::String::String_Format_1
                                       (StringLiteral_vt1__0___1_u000A,(Object *)pCStack_16,
                                        pOStack_12,(MethodInfo *)0x0);
                    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                              (pSVar2,pSVar5,(MethodInfo *)0x0);
                  }
                  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                            (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                  pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv2
                                     (this,(MethodInfo *)0x0);
                  iVar21 = 0;
                  if (pVVar20 != (Vector2__Array *)0x0) {
                    for (; iVar21 < (int)pVVar20->max_length; iVar21 = iVar21 + 1) {
                      puVar22 = (undefined4 *)func_?(iVar21);
                      pOStack_12 = (Object *)puVar22[1];
                      pCStack_6 = (Color__Array *)*puVar22;
                      pCStack_16 = (Color__Array *)
                                   func_?(TypeInfo__System__Single,&pCStack_6);
                      pOStack_14 = pOStack_12;
                      pOStack_12 = (Object *)func_?(TypeInfo__System__Single,&pOStack_14);
                      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000)
                           != 0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                        func_?(TypeInfo__System__String);
                      }
                      pSVar5 = mscorlib.dll::System::String::String_Format_1
                                         (StringLiteral_vt2__0___1_u000A,(Object *)pCStack_16,
                                          pOStack_12,(MethodInfo *)0x0);
                      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                (pSVar2,pSVar5,(MethodInfo *)0x0);
                    }
                    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                              (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                    pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_colors
                                        (this,(MethodInfo *)0x0);
                    pVStack_13 = (Vector3__Array *)0x0;
                    pCStack_15 = pCVar9;
                    if (pCVar9 != (Color__Array *)0x0) {
                      while( true ) {
                        pCStack_11 = (Color__Array *)pCVar9->vector;
                        if ((int)pCStack_15->max_length <= (int)pVStack_13) break;
                        if ((Vector3__Array *)pCStack_15->max_length <= pVStack_13)
                        goto code_?;
                        pCVar23 = (Color__Array *)((Color *)pCStack_11)->r;
                        pfVar24 = &pCVar9->vector[0].g;
                        fVar25 = *pfVar24;
                        fVar26 = pCVar9->vector[0].b;
                        uVar10 = *(undefined8 *)pfVar24;
                        pCVar9 = (Color__Array *)pCVar9->vector[0].a;
                        args = (Object__Array *)
                               func_?(TypeInfo__System__Object,pCVar23,fVar25,fVar26,pCVar9,
                                               pCVar23,fVar25,fVar26,pCVar9);
                        pCStack_6 = pCVar23;
                        uVar27 = func_?(TypeInfo__System__Single,&pCStack_6);
                        if (args == (Object__Array *)0x0) goto code_?;
                        func_?(args,uVar27);
                        func_?(0,uVar27);
                        pOStack_12 = (Object *)uVar10;
                        uVar27 = func_?(TypeInfo__System__Single,&pOStack_12);
                        pOVar18 = (Object *)((ulonglong)uVar10 >> 0x20);
                        func_?(args,uVar27);
                        func_?(1,uVar27);
                        pOStack_14 = pOVar18;
                        uVar27 = func_?(TypeInfo__System__Single,&pOStack_14);
                        func_?(args,uVar27);
                        func_?(2,uVar27);
                        pCStack_16 = pCVar9;
                        uVar27 = func_?(TypeInfo__System__Single,&pCStack_16);
                        func_?(args,uVar27);
                        func_?(3,uVar27);
                        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000)
                             != 0) && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                          func_?(TypeInfo__System__String);
                        }
                        pSVar5 = mscorlib.dll::System::String::String_Format_3
                                           (StringLiteral_vc__0___1___2___3_u000A,args,
                                            (MethodInfo *)0x0);
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                  (pSVar2,pSVar5,(MethodInfo *)0x0);
                        pVStack_13 = (Vector3__Array *)((int)&pVStack_13->klass + 1);
                        pCVar9 = pCStack_11;
                      }
                      pCVar9 = (Color__Array *)0x0;
                      while( true ) {
                        pCStack_11 = pCVar9;
                        iVar28 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                 Mesh_get_subMeshCount(this,(MethodInfo *)0x0);
                        if (iVar28 <= (int)pCVar9) {
                          pSVar5 = (String *)func_?(3,pSVar2);
                          return pSVar5;
                        }
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                  (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                        pSVar4 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                           (pSVar2,StringLiteral_usemtl_,(MethodInfo *)0x0);
                        if ((((pMStack_1 == (Material__Array *)0x0) ||
                             (pCStack_6 = pCVar9, pOVar29 = (Object_1 *)func_?(),
                             pOVar29 == (Object_1 *)0x0)) ||
                            (pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_get_name(pOVar29,(MethodInfo *)0x0),
                            pSVar4 == (StringBuilder *)0x0)) ||
                           (pSVar4 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                               (pSVar4,pSVar5,(MethodInfo *)0x0),
                           pSVar4 == (StringBuilder *)0x0)) break;
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                  (pSVar4,StringLiteral_u000A,(MethodInfo *)0x0);
                        pSVar2 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                           (pSVar2,StringLiteral_usemap_,(MethodInfo *)0x0);
                        pCStack_16 = pCVar9;
                        pOVar29 = (Object_1 *)func_?();
                        if (((pOVar29 == (Object_1 *)0x0) ||
                            (pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_get_name(pOVar29,(MethodInfo *)0x0),
                            pSVar2 == (StringBuilder *)0x0)) ||
                           (pSVar2 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                               (pSVar2,pSVar5,(MethodInfo *)0x0),
                           pSVar2 == (StringBuilder *)0x0)) break;
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                  (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                        pIVar30 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_GetTriangles
                                            (this,(int32_t)pCVar9,(MethodInfo *)0x0);
                        iVar21 = 0;
                        while( true ) {
                          if (pIVar30 == (Int32__Array *)0x0) goto code_?;
                          if ((int)pIVar30->max_length <= iVar21) break;
                          iVar31 = func_?(iVar21);
                          pCStack_6 = (Color__Array *)(iVar31 + 1);
                          pCStack_15 = (Color__Array *)
                                       func_?(TypeInfo__System__Int32,&pCStack_6);
                          iVar31 = func_?(iVar21 + 1);
                          pOStack_12 = (Object *)(iVar31 + 1);
                          pCStack_16 = (Color__Array *)
                                       func_?(TypeInfo__System__Int32,&pOStack_12);
                          iVar31 = func_?(iVar21 + 2);
                          pOStack_14 = (Object *)(iVar31 + 1);
                          pOVar18 = (Object *)func_?(TypeInfo__System__Int32,&pOStack_14);
                          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__System__String->_1).cctor_started == 0)) {
                            func_?(TypeInfo__System__String);
                          }
                          pSVar5 = mscorlib.dll::System::String::String_Format_2
                                             (StringLiteral_f__0___0___0___1___1___1___2___2,
                                              (Object *)pCStack_15,(Object *)pCStack_16,pOVar18,
                                              (MethodInfo *)0x0);
                          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append
                                    (pSStack_3,pSVar5,(MethodInfo *)0x0);
                          iVar21 = iVar21 + 3;
                        }
                        pCVar9 = (Color__Array *)((int)&pCStack_11->klass + 1);
                        pSVar2 = pSStack_3;
                      }
                    }
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
  func_?(0);
  pcVar32 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar32)();
  return pSVar5;
code_?:
  uVar27 = func_?(0,0);
  func_?(uVar27);
  goto code_?;
}

