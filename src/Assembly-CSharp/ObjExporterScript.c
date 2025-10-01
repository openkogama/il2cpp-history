
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
        do {
          if (*(IEnumerator__Class **)(*(int *)(*piVar5 + 0x58) + (uint)uVar8 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar10 = (undefined4 *)
                     (*piVar5 +
                     (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar8 * 8) + 0x19) * 8);
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
    this = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                     (mf,(MethodInfo *)0x0);
    this_00 = (Renderer *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)mf,
                         UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                        );
    if (this_00 != (Renderer *)0x0) {
      pMStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                            (this_00,(MethodInfo *)0x0);
      pSVar2 = (StringBuilder *)func_?(TypeInfo__System__Text__StringBuilder);
      pSStack_3 = pSVar2;
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(pSVar2,(MethodInfo *)0x0);
      if (pSVar2 != (StringBuilder *)0x0) {
        pSVar4 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                           (pSVar2,StringLiteral_g_,(MethodInfo *)0x0);
        pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                           ((Object_1 *)mf,(MethodInfo *)0x0);
        if (((pSVar4 != (StringBuilder *)0x0) &&
            (pSVar4 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                (pSVar4,pSVar5,(MethodInfo *)0x0), pSVar4 != (StringBuilder *)0x0))
           && (mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                         (pSVar4,StringLiteral_u000A,(MethodInfo *)0x0), this != (Mesh *)0x0)) {
          pVStack_6 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                                 (this,(MethodInfo *)0x0);
          pCStack_7 = (Color__Array *)0x0;
          if (pVStack_6 != (Vector3__Array *)0x0) {
            pVStack_8 = pVStack_6->vector;
            for (; (int)pCStack_7 < (int)pVStack_6->max_length;
                pCStack_7 = (Color__Array *)((int)&pCStack_7->klass + 1)) {
              if ((Color__Array *)pVStack_6->max_length <= pCStack_7) goto code_?;
              pMVar9 = (Material *)pVStack_8->z;
              uVar10._0_4_ = pVStack_8->x;
              uVar10._4_4_ = pVStack_8->y;
              pVStack_11 = (Vector3__Array *)(undefined4)uVar10;
              pOVar12 = (Object *)func_?(TypeInfo__System__Single,&pVStack_11);
              pMStack_13 = (Material *)((ulonglong)uVar10 >> 0x20);
              pOVar14 = (Object *)func_?(TypeInfo__System__Single,&pMStack_13);
              pMStack_15 = pMVar9;
              pOVar16 = (Object *)func_?(TypeInfo__System__Single,&pMStack_15);
              pSVar5 = mscorlib.dll::System::String::String_Format_2
                                 (StringLiteral_v__0___1___2_u000A,pOVar12,pOVar14,pOVar16,
                                  (MethodInfo *)0x0);
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                        (pSVar2,pSVar5,(MethodInfo *)0x0);
              pVStack_8 = pVStack_8 + 1;
            }
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
            pVStack_11 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_normals
                                   (this,(MethodInfo *)0x0);
            pVStack_8 = (Vector3 *)0x0;
            if (pVStack_11 != (Vector3__Array *)0x0) {
              pCStack_7 = (Color__Array *)pVStack_11->vector;
              for (; (int)pVStack_8 < (int)pVStack_11->max_length;
                  pVStack_8 = (Vector3 *)((int)&pVStack_8->x + 1)) {
                if ((undefined8 *)pVStack_11->max_length <= pVStack_8) goto code_?;
                pMVar9 = (Material *)pCStack_7->bounds;
                uVar17._0_4_ = pCStack_7->klass;
                uVar17._4_4_ = pCStack_7->monitor;
                pVStack_6 = (Vector3__Array *)(undefined4)uVar17;
                pOVar12 = (Object *)func_?(TypeInfo__System__Single,&pVStack_6);
                pMStack_15 = (Material *)((ulonglong)uVar17 >> 0x20);
                pOVar14 = (Object *)func_?(TypeInfo__System__Single,&pMStack_15);
                pMStack_13 = pMVar9;
                pOVar16 = (Object *)func_?(TypeInfo__System__Single,&pMStack_13);
                pSVar5 = mscorlib.dll::System::String::String_Format_2
                                   (StringLiteral_vn__0___1___2_u000A,pOVar12,pOVar14,pOVar16,
                                    (MethodInfo *)0x0);
                mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                          (pSVar2,pSVar5,(MethodInfo *)0x0);
                pCStack_7 = (Color__Array *)&pCStack_7->max_length;
              }
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                        (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv
                                  (this,(MethodInfo *)0x0);
              pVStack_8 = (Vector3 *)0x0;
              if (pVVar18 != (Vector2__Array *)0x0) {
                pCStack_7 = (Color__Array *)pVVar18->vector;
                for (; (int)pVStack_8 < (int)pVVar18->max_length;
                    pVStack_8 = (Vector3 *)((int)&pVStack_8->x + 1)) {
                  if ((undefined8 *)pVVar18->max_length <= pVStack_8) goto code_?;
                  pVStack_6 = (Vector3__Array *)pCStack_7->klass;
                  pMStack_15 = (Material *)pCStack_7->monitor;
                  pOVar12 = (Object *)func_?(TypeInfo__System__Single,&pVStack_6);
                  pMStack_13 = pMStack_15;
                  pOVar14 = (Object *)func_?(TypeInfo__System__Single,&pMStack_13);
                  pSVar5 = mscorlib.dll::System::String::String_Format_1
                                     (StringLiteral_vt__0___1_u000A,pOVar12,pOVar14,(MethodInfo *)0x0)
                  ;
                  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (pSVar2,pSVar5,(MethodInfo *)0x0);
                  pCStack_7 = (Color__Array *)&pCStack_7->bounds;
                }
                mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                          (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv2
                                    (this,(MethodInfo *)0x0);
                pVStack_8 = (Vector3 *)0x0;
                if (pVVar18 != (Vector2__Array *)0x0) {
                  pCStack_7 = (Color__Array *)pVVar18->vector;
                  for (; (int)pVStack_8 < (int)pVVar18->max_length;
                      pVStack_8 = (Vector3 *)((int)&pVStack_8->x + 1)) {
                    if ((undefined8 *)pVVar18->max_length <= pVStack_8) goto code_?;
                    pVStack_6 = (Vector3__Array *)pCStack_7->klass;
                    pMStack_15 = (Material *)pCStack_7->monitor;
                    pOVar12 = (Object *)func_?(TypeInfo__System__Single,&pVStack_6);
                    pMStack_13 = pMStack_15;
                    pOVar14 = (Object *)func_?(TypeInfo__System__Single,&pMStack_13);
                    pSVar5 = mscorlib.dll::System::String::String_Format_1
                                       (StringLiteral_vt1__0___1_u000A,pOVar12,pOVar14,
                                        (MethodInfo *)0x0);
                    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                              (pSVar2,pSVar5,(MethodInfo *)0x0);
                    pCStack_7 = (Color__Array *)&pCStack_7->bounds;
                  }
                  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                  pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_uv2
                                      (this,(MethodInfo *)0x0);
                  pVStack_8 = (Vector3 *)0x0;
                  if (pVVar18 != (Vector2__Array *)0x0) {
                    pCStack_7 = (Color__Array *)pVVar18->vector;
                    for (; (int)pVStack_8 < (int)pVVar18->max_length;
                        pVStack_8 = (Vector3 *)((int)&pVStack_8->x + 1)) {
                      if ((undefined8 *)pVVar18->max_length <= pVStack_8) goto code_?;
                      pVStack_6 = (Vector3__Array *)pCStack_7->klass;
                      pMStack_15 = (Material *)pCStack_7->monitor;
                      pOVar12 = (Object *)func_?(TypeInfo__System__Single,&pVStack_6);
                      pMStack_13 = pMStack_15;
                      pOVar14 = (Object *)func_?(TypeInfo__System__Single,&pMStack_13);
                      pSVar5 = mscorlib.dll::System::String::String_Format_1
                                         (StringLiteral_vt2__0___1_u000A,pOVar12,pOVar14,
                                          (MethodInfo *)0x0);
                      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                (pSVar2,pSVar5,(MethodInfo *)0x0);
                      pCStack_7 = (Color__Array *)&pCStack_7->bounds;
                    }
                    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                              (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                    pCVar19 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_colors
                                        (this,(MethodInfo *)0x0);
                    pVStack_8 = (Vector3 *)0x0;
                    pCStack_20 = pCVar19;
                    if (pCVar19 != (Color__Array *)0x0) {
                      for (; pCStack_7 = (Color__Array *)pCVar19->vector,
                          (int)pVStack_8 < (int)pCStack_20->max_length;
                          pVStack_8 = (Vector3 *)((int)&pVStack_8->x + 1)) {
                        if ((undefined8 *)pCStack_20->max_length <= pVStack_8)
                        goto code_?;
                        pVVar21 = (Vector3__Array *)((Color *)pCStack_7)->r;
                        fVar22 = pCVar19->vector[0].g;
                        fVar23 = pCVar19->vector[0].b;
                        uVar24._0_4_ = pCVar19->vector[0].g;
                        uVar24._4_4_ = pCVar19->vector[0].b;
                        pVVar25 = (Vector3__Array *)pCVar19->vector[0].a;
                        args = (Object__Array *)
                               func_?(TypeInfo__System__Object,pVVar21,fVar22,fVar23,pVVar25,
                                               pVVar21,fVar22,fVar23,pVVar25);
                        pVStack_6 = pVVar21;
                        pOVar12 = (Object *)func_?(TypeInfo__System__Single,&pVStack_6);
                        if (args == (Object__Array *)0x0) goto code_?;
                        if ((pOVar12 != (Object *)0x0) &&
                           (iVar26 = func_?(pOVar12,(args->klass->_0).element_class),
                           iVar26 == 0)) goto code_?;
                        if (args->max_length == 0) goto code_?;
                        args->vector[0] = pOVar12;
                        func_?(args->vector,pOVar12);
                        pMStack_15 = (Material *)uVar24;
                        pOVar12 = (Object *)func_?(TypeInfo__System__Single,&pMStack_15);
                        pMVar9 = (Material *)((ulonglong)uVar24 >> 0x20);
                        if ((pOVar12 != (Object *)0x0) &&
                           (iVar26 = func_?(pOVar12,(args->klass->_0).element_class),
                           iVar26 == 0)) goto code_?;
                        if (args->max_length < 2) goto code_?;
                        args->vector[1] = pOVar12;
                        func_?(args->vector + 1,pOVar12);
                        pMStack_13 = pMVar9;
                        pOVar12 = (Object *)func_?(TypeInfo__System__Single,&pMStack_13);
                        if ((pOVar12 != (Object *)0x0) &&
                           (iVar26 = func_?(pOVar12,(args->klass->_0).element_class),
                           iVar26 == 0)) goto code_?;
                        if (args->max_length < 3) goto code_?;
                        args->vector[2] = pOVar12;
                        func_?(args->vector + 2,pOVar12);
                        pVStack_11 = pVVar25;
                        pOVar12 = (Object *)func_?(TypeInfo__System__Single,&pVStack_11);
                        if ((pOVar12 != (Object *)0x0) &&
                           (iVar26 = func_?(pOVar12,(args->klass->_0).element_class),
                           iVar26 == 0)) goto code_?;
                        if (args->max_length < 4) goto code_?;
                        args->vector[3] = pOVar12;
                        func_?(args->vector + 3,pOVar12);
                        pSVar5 = mscorlib.dll::System::String::String_Format_3
                                           (StringLiteral_vc__0___1___2___3_u000A,args,
                                            (MethodInfo *)0x0);
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                  (pSVar2,pSVar5,(MethodInfo *)0x0);
                        pCVar19 = pCStack_7;
                      }
                      pVVar21 = (Vector3__Array *)0x0;
                      pCStack_7 = (Color__Array *)pMStack_1->vector;
                      while( true ) {
                        pVStack_11 = pVVar21;
                        iVar27 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                 Mesh_get_subMeshCount(this,(MethodInfo *)0x0);
                        if (iVar27 <= (int)pVVar21) {
                          pSVar5 = (String *)
                                   (*(code *)(pSVar2->klass->vtable).ToString.method)
                                             (pSVar2,(pSVar2->klass->vtable).
                                                                                                          
                                                  System_Runtime_Serialization_ISerializable_GetObjectData
                                                  .methodPtr);
                          return pSVar5;
                        }
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                  (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                        pSVar4 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                           (pSVar2,StringLiteral_usemtl_,(MethodInfo *)0x0);
                        if (pMStack_1 == (Material__Array *)0x0) break;
                        if ((Vector3__Array *)pMStack_1->max_length <= pVVar21)
                        goto code_?;
                        if (((pCStack_7->klass == (Color__Array__Class *)0x0) ||
                            (pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_get_name((Object_1 *)pCStack_7->klass,
                                                        (MethodInfo *)0x0),
                            pSVar4 == (StringBuilder *)0x0)) ||
                           (pSVar4 = mscorlib.dll::System::Text::StringBuilder::
                                     StringBuilder_Append_2(pSVar4,pSVar5,(MethodInfo *)0x0),
                           pSVar4 == (StringBuilder *)0x0)) break;
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                  (pSVar4,StringLiteral_u000A,(MethodInfo *)0x0);
                        pSVar2 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                           (pSVar2,StringLiteral_usemap_,(MethodInfo *)0x0);
                        if ((Vector3__Array *)pMStack_1->max_length <= pVVar21)
                        goto code_?;
                        if (((pCStack_7->klass == (Color__Array__Class *)0x0) ||
                            (pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_get_name((Object_1 *)pCStack_7->klass,
                                                        (MethodInfo *)0x0),
                            pSVar2 == (StringBuilder *)0x0)) ||
                           (pSVar2 = mscorlib.dll::System::Text::StringBuilder::
                                     StringBuilder_Append_2(pSVar2,pSVar5,(MethodInfo *)0x0),
                           pSVar2 == (StringBuilder *)0x0)) break;
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                  (pSVar2,StringLiteral_u000A,(MethodInfo *)0x0);
                        pIVar28 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_GetTriangles
                                            (this,(int32_t)pVVar21,(MethodInfo *)0x0);
                        pVVar29 = (Vector3 *)(pIVar28->vector + 2);
                        uVar30 = 0;
                        pVStack_8 = pVVar29;
                        if (pIVar28 == (Int32__Array *)0x0) break;
                        for (; pVStack_8 = pVVar29, (int)uVar30 < (int)pIVar28->max_length;
                            uVar30 = uVar30 + 3) {
                          if (pIVar28->max_length <= uVar30) goto code_?;
                          pCStack_20 = (Color__Array *)
                                       ((int)&(*(Il2CppArrayBounds **)((int)(pVVar29 + -1) + 4))->
                                              length + 1);
                          pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&pCStack_20);
                          if (pIVar28->max_length <= uVar30 + 1) goto code_?;
                          pVStack_6 = (Vector3__Array *)
                                       (*(il2cpp_array_size_t *)((int)(pVVar29 + -1) + 8) + 1);
                          pMStack_13 = (Material *)
                                       func_?(TypeInfo__System__Int32,&pVStack_6);
                          pVVar29 = pVStack_8;
                          if (pIVar28->max_length <= uVar30 + 2) goto code_?;
                          pMStack_15 = (Material *)((int)pVStack_8->x + 1);
                          pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&pMStack_15);
                          pSVar5 = mscorlib.dll::System::String::String_Format_2
                                             (StringLiteral_f__0___0___0___1___1___1___2___2,pOVar12,
                                              (Object *)pMStack_13,pOVar14,(MethodInfo *)0x0);
                          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                    (pSStack_3,pSVar5,(MethodInfo *)0x0);
                          pVVar29 = pVVar29 + 1;
                        }
                        pVVar21 = (Vector3__Array *)((int)&pVStack_11->klass + 1);
                        pCStack_7 = (Color__Array *)&pCStack_7->monitor;
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
  func_?();
  pcVar31 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar31)();
  return pSVar5;
code_?:
  func_?();
code_?:
  uVar32 = func_?(0);
  func_?(uVar32);
  goto code_?;
}

