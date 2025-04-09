
/* Void CubeModelToFile(MVCubeModelBase) */

void Assembly-CSharp.dll::ObjExporterScript::ObjExporterScript_CubeModelToFile
               (MVCubeModelBase *cm,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_UnityEngine::GameObject>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_UnityEngine::GameObject>
                   );
    func_?(&StringLiteral_Saved_obj_file_);
    func_?(&StringLiteral__obj);
    cRam_? = '\x01';
  }
  if ((cm != (MVCubeModelBase *)0x0) &&
     (pCVar4 = (cm->fields).chunkInstances, pCVar4 != (ChunkInstances *)0x0)) {
    piVar5 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar4);
    uStack_1 = 1;
    while (piVar5 != (int *)0x0) {
      cVar6 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar5);
      if (cVar6 == '\0') {
        uStack_1 = 0xffffffff;
        iVar7 = func_?(piVar5,TypeInfo__System__IDisposable);
        if (iVar7 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar7);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar5 == (int *)0x0) break;
      uVar8 = 0;
      uVar9 = *(ushort *)(*piVar5 + 0xb6);
      if (uVar9 != 0) {
        iVar7 = *(int *)(*piVar5 + 0x58);
        do {
          if (*(IEnumerator__Class **)(iVar7 + (uint)uVar8 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar10 = (undefined4 *)(*piVar5 + 200 + *(int *)(iVar7 + 4 + (uint)uVar8 * 8) * 8);
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
      puVar10 = (undefined4 *)func_?(piVar5,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      piVar11 = (int *)(*(code *)*puVar10)(piVar5,puVar10[1]);
      uVar12 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_UnityEngine::GameObject>
                        ,piVar11);
      if (piVar11 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar11 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_UnityEngine::GameObject>
          ->_0).element_class) goto code_?;
      iVar7 = func_?(piVar11);
      this = *(GameObject **)(iVar7 + 8);
      if (this == (GameObject *)0x0) break;
      mf = (MeshFilter *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (this,
                      UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                     );
      pGVar13 = (cm->fields)._.gameObject;
      if (pGVar13 == (GameObject *)0x0) break;
      pSVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                          ((Object_1 *)pGVar13,(MethodInfo *)0x0);
      pSVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                          ((Object_1 *)this,(MethodInfo *)0x0);
      pSVar14 = mscorlib.dll::System::String::String_Concat_4
                          (pSVar14,pSVar15,StringLiteral__obj,(MethodInfo *)0x0);
      ObjExporterScript_MeshToFile(mf,pSVar14,0,(MethodInfo *)0x0);
      pGVar13 = (cm->fields)._.gameObject;
      if (pGVar13 == (GameObject *)0x0) break;
      pSVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                          ((Object_1 *)pGVar13,(MethodInfo *)0x0);
      pSVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                          ((Object_1 *)this,(MethodInfo *)0x0);
      pSVar14 = mscorlib.dll::System::String::String_Concat_5
                          (StringLiteral_Saved_obj_file_,pSVar14,pSVar15,StringLiteral__obj,
                           (MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar14,(MethodInfo *)0x0);
    }
  }
  uVar12 = func_?();
code_?:
  func_?(uVar12);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__IO__StreamWriter);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  this = (StreamWriter *)func_?(TypeInfo__System__IO__StreamWriter);
  mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor_5
            (this,filename,append,(MethodInfo *)0x0);
  iStack_1._0_1_ = 2;
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
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Text__StringBuilder);
    func_?(&StringLiteral_vt2__0___1_u000A);
    func_?(&StringLiteral_u000A);
    func_?(&StringLiteral_vt1__0___1_u000A);
    func_?(&StringLiteral_usemtl_);
    func_?(&StringLiteral_g_);
    func_?(&StringLiteral_vt__0___1_u000A);
    func_?(&StringLiteral_f__0___0___0___1___1___1___2___2);
    func_?(&StringLiteral_usemap_);
    func_?(&StringLiteral_vn__0___1___2_u000A);
    func_?(&StringLiteral_v__0___1___2_u000A);
    func_?(&StringLiteral_vc__0___1___2___3_u000A);
    cRam_? = '\x01';
  }
  if (mf != (MeshFilter *)0x0) {
    this = (MeshFilter *)
           UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                     (mf,(MethodInfo *)0x0);
    this_00 = (Renderer *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)mf,
                         UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                        );
    if (this_00 != (Renderer *)0x0) {
      pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                         (this_00,(MethodInfo *)0x0);
      pSVar2 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(pSVar2,(MethodInfo *)0x0);
      if (pSVar2 != (StringBuilder *)0x0) {
        pSVar3 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                           (pSVar2,StringLiteral_g_,(MethodInfo *)0x0);
        pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                           ((Object_1 *)mf,(MethodInfo *)0x0);
        if (((pSVar3 != (StringBuilder *)0x0) &&
            (pSVar3 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                (pSVar3,pSVar4,(MethodInfo *)0x0), pSVar3 != (StringBuilder *)0x0))
           && (mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                         (pSVar3,StringLiteral_u000A,(MethodInfo *)0x0), this != (MeshFilter *)0x0))
        {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                              ((Mesh *)this,(MethodInfo *)0x0);
          ppMStack_6 = (Material **)0x0;
          if (pVVar5 != (Vector3__Array *)0x0) {
            for (; (int)ppMStack_6 < (int)pVVar5->max_length;
                ppMStack_6 = (Material **)((int)ppMStack_6 + 1)) {
              if (pVVar5->max_length <= ppMStack_6) goto code_?;
              pOVar7 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffe8);
              pOVar8 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffe4);
              pOVar9 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffe0);
              pSVar4 = mscorlib.dll::System::String::String_Format_2
                                 (StringLiteral_v__0___1___2_u000A,pOVar7,pOVar8,pOVar9,
                                  (MethodInfo *)0x0);
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                        (pSVar2,pSVar4,(MethodInfo *)0x0);
            }
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_normals
                                ((Mesh *)this,(MethodInfo *)0x0);
            uStack_10 = 0;
            if (pVVar5 != (Vector3__Array *)0x0) {
              for (; (int)uStack_10 < (int)pVVar5->max_length; uStack_10 = uStack_10 + 1) {
                if (pVVar5->max_length <= uStack_10) goto code_?;
                pOVar7 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffdc);
                pOVar8 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffe0);
                pOVar9 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffe4);
                pSVar4 = mscorlib.dll::System::String::String_Format_2
                                   (StringLiteral_vn__0___1___2_u000A,pOVar7,pOVar8,pOVar9,
                                    (MethodInfo *)0x0);
                mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                          (pSVar2,pSVar4,(MethodInfo *)0x0);
              }
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                        (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv
                                  ((Mesh *)this,(MethodInfo *)0x0);
              uVar12 = 0;
              if (pVVar11 != (Vector2__Array *)0x0) {
                for (; (int)uVar12 < (int)pVVar11->max_length; uVar12 = uVar12 + 1) {
                  if (pVVar11->max_length <= uVar12) goto code_?;
                  pOVar7 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffdc);
                  pOVar8 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffe4);
                  pSVar4 = mscorlib.dll::System::String::String_Format_1
                                     (StringLiteral_vt__0___1_u000A,pOVar7,pOVar8,
                                      (MethodInfo *)0x0);
                  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (pSVar2,pSVar4,(MethodInfo *)0x0);
                }
                mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                          (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv2
                                    ((Mesh *)this,(MethodInfo *)0x0);
                uVar12 = 0;
                if (pVVar11 != (Vector2__Array *)0x0) {
                  for (; (int)uVar12 < (int)pVVar11->max_length; uVar12 = uVar12 + 1) {
                    if (pVVar11->max_length <= uVar12) goto code_?;
                    pOVar7 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffdc);
                    pOVar8 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffe4);
                    pSVar4 = mscorlib.dll::System::String::String_Format_1
                                       (StringLiteral_vt1__0___1_u000A,pOVar7,pOVar8,
                                        (MethodInfo *)0x0);
                    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                              (pSVar2,pSVar4,(MethodInfo *)0x0);
                  }
                  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv2
                                      ((Mesh *)this,(MethodInfo *)0x0);
                  uVar12 = 0;
                  if (pVVar11 != (Vector2__Array *)0x0) {
                    for (; (int)uVar12 < (int)pVVar11->max_length; uVar12 = uVar12 + 1) {
                      if (pVVar11->max_length <= uVar12) goto code_?;
                      pOVar7 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffdc)
                      ;
                      pOVar8 = (Object *)func_?(TypeInfo__System__Single,&stack0xffffffe4)
                      ;
                      pSVar4 = mscorlib.dll::System::String::String_Format_1
                                         (StringLiteral_vt2__0___1_u000A,pOVar7,pOVar8,
                                          (MethodInfo *)0x0);
                      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                (pSVar2,pSVar4,(MethodInfo *)0x0);
                    }
                    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                              (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                    pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_colors
                                        ((Mesh *)this,(MethodInfo *)0x0);
                    uStack_10 = 0;
                    pCVar14 = pCVar13;
                    if (pCVar13 != (Color__Array *)0x0) {
                      while( true ) {
                        if ((int)pCVar14->max_length <= (int)uStack_10) break;
                        if (pCVar14->max_length <= uStack_10) goto code_?;
                        fVar15 = pCVar13->vector[0].r;
                        fVar16 = pCVar13->vector[0].g;
                        fVar17 = pCVar13->vector[0].b;
                        fVar18 = pCVar13->vector[0].a;
                        args = (Object__Array *)
                               func_?(TypeInfo__System__Object,fVar15,fVar16,fVar17,fVar18,
                                               fVar15,fVar16,fVar17,fVar18);
                        pOVar7 = (Object *)
                                  func_?(TypeInfo__System__Single,&stack0xffffffdc);
                        if (args == (Object__Array *)0x0) goto code_?;
                        if ((pOVar7 != (Object *)0x0) &&
                           (iVar19 = func_?(pOVar7,(args->klass->_0).element_class),
                           iVar19 == 0)) goto code_?;
                        if (args->max_length == 0) goto code_?;
                        args->vector[0] = pOVar7;
                        func_?(args->vector,pOVar7);
                        pOVar7 = (Object *)
                                  func_?(TypeInfo__System__Single,&stack0xffffffe0);
                        if ((pOVar7 != (Object *)0x0) &&
                           (iVar19 = func_?(pOVar7,(args->klass->_0).element_class),
                           iVar19 == 0)) goto code_?;
                        if (args->max_length < 2) goto code_?;
                        args->vector[1] = pOVar7;
                        func_?(args->vector + 1,pOVar7);
                        pOVar7 = (Object *)
                                  func_?(TypeInfo__System__Single,&stack0xffffffe4);
                        if ((pOVar7 != (Object *)0x0) &&
                           (iVar19 = func_?(pOVar7,(args->klass->_0).element_class),
                           iVar19 == 0)) goto code_?;
                        if (args->max_length < 3) goto code_?;
                        args->vector[2] = pOVar7;
                        func_?(args->vector + 2,pOVar7);
                        pOVar7 = (Object *)
                                  func_?(TypeInfo__System__Single,&stack0xffffffe8);
                        if ((pOVar7 != (Object *)0x0) &&
                           (iVar19 = func_?(pOVar7,(args->klass->_0).element_class),
                           iVar19 == 0)) goto code_?;
                        if (args->max_length < 4) goto code_?;
                        args->vector[3] = pOVar7;
                        func_?(args->vector + 3,pOVar7);
                        pSVar4 = mscorlib.dll::System::String::String_Format_3
                                           (StringLiteral_vc__0___1___2___3_u000A,args,
                                            (MethodInfo *)0x0);
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                  (pSVar2,pSVar4,(MethodInfo *)0x0);
                        uStack_10 = uStack_10 + 1;
                        pCVar13 = (Color__Array *)pCVar13->vector;
                      }
                      uVar12 = 0;
                      ppMStack_6 = pMVar1->vector;
                      mf = this;
                      while( true ) {
                        iVar20 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                 Mesh_get_subMeshCount((Mesh *)mf,(MethodInfo *)0x0);
                        if (iVar20 <= (int)uVar12) {
                          pSVar4 = (String *)
                                   (*(code *)(pSVar2->klass->vtable).ToString.method)
                                             (pSVar2,(pSVar2->klass->vtable).
                                                                                                          
                                                  System_Runtime_Serialization_ISerializable_GetObjectData
                                                  .methodPtr);
                          return pSVar4;
                        }
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                  (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                        pSVar3 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                           (pSVar2,StringLiteral_usemtl_,(MethodInfo *)0x0);
                        if (pMVar1 == (Material__Array *)0x0) break;
                        if (pMVar1->max_length <= uVar12) goto code_?;
                        if (((*ppMStack_6 == (Material *)0x0) ||
                            (pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_get_name((Object_1 *)*ppMStack_6,(MethodInfo *)0x0),
                            pSVar3 == (StringBuilder *)0x0)) ||
                           (pSVar3 = mscorlib.dll::System::Text::StringBuilder::
                                     StringBuilder_Append_2(pSVar3,pSVar4,(MethodInfo *)0x0),
                           pSVar3 == (StringBuilder *)0x0)) break;
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                  (pSVar3,StringLiteral_u000A,(MethodInfo *)0x0);
                        pSVar3 = (StringBuilder *)0x0;
                        mf = (MeshFilter *)
                             mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                       (pSVar2,StringLiteral_usemap_,(MethodInfo *)0x0);
                        if (pMVar1->max_length <= uVar12) goto code_?;
                        if (((*ppMStack_6 == (Material *)0x0) ||
                            (pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_get_name((Object_1 *)*ppMStack_6,(MethodInfo *)0x0),
                            (StringBuilder *)mf == (StringBuilder *)0x0)) ||
                           (pSVar2 = mscorlib.dll::System::Text::StringBuilder::
                                     StringBuilder_Append_2
                                               ((StringBuilder *)mf,pSVar4,(MethodInfo *)0x0),
                           pSVar2 == (StringBuilder *)0x0)) break;
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                  (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                        pIVar21 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_GetTriangles
                                            ((Mesh *)mf,uVar12,(MethodInfo *)0x0);
                        uVar22 = 0;
                        pSVar2 = pSVar3;
                        while( true ) {
                          if (pIVar21 == (Int32__Array *)0x0) goto code_?;
                          if ((int)pIVar21->max_length <= (int)uVar22) break;
                          if (((pIVar21->max_length <= uVar22) ||
                              (pOVar7 = (Object *)
                                         func_?(TypeInfo__System__Int32,&stack0xffffffd8),
                              pIVar21->max_length <= uVar22 + 1)) ||
                             (pOVar8 = (Object *)
                                        func_?(TypeInfo__System__Int32,&stack0xffffffdc),
                             pIVar21->max_length <= uVar22 + 2)) goto code_?;
                          pOVar9 = (Object *)
                                    func_?(TypeInfo__System__Int32,&stack0xffffffe0);
                          pSVar4 = mscorlib.dll::System::String::String_Format_2
                                             (StringLiteral_f__0___0___0___1___1___1___2___2,pOVar7
                                              ,pOVar8,pOVar9,(MethodInfo *)0x0);
                          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                    (pSVar2,pSVar4,(MethodInfo *)0x0);
                          uVar22 = uVar22 + 3;
                        }
                        uVar12 = uVar12 + 1;
                        ppMStack_6 = ppMStack_6 + 1;
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
  func_?();
  pcVar23 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar23)();
  return pSVar4;
code_?:
  func_?();
code_?:
  uVar24 = func_?(0);
  func_?(uVar24);
  goto code_?;
}

