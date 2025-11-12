
/* Void CubeModelToFile(MVCubeModelBase) */

void Assembly-CSharp.dll::ObjExporterScript::ObjExporterScript_CubeModelToFile
               (MVCubeModelBase *cm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_UnityEngine::GameObject>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_UnityEngine::GameObject>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Saved_obj_file_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__obj);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((cm == (MVCubeModelBase *)0x0) || ((cm->fields).chunkInstances == (ChunkInstances *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar2 = (longlong *)FUN_?(0,TypeInfo__System__Collections__IEnumerable);
  do {
    if (plVar2 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar3 == '\0') {
      lVar4 = FUN_?(plVar2,TypeInfo__System__IDisposable);
      if (lVar4 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,lVar4);
      }
      return;
    }
    if (plVar2 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar4 = *plVar2;
    uVar5 = 0;
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      do {
        if (*(IEnumerator__Class **)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar5 * 0x10) ==
            TypeInfo__System__Collections__IEnumerator) {
          puVar6 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar5 * 0x10) + 1) *
                    0x10 + 0x138 + lVar4);
          goto code_?;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar6 = (undefined8 *)FUN_?(plVar2,TypeInfo__System__Collections__IEnumerator,1);
code_?:
    plVar7 = (longlong *)(*(code *)*puVar6)(plVar2,puVar6[1]);
    if (plVar7 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pKVar8 = 
    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_UnityEngine::GameObject>
    ;
    if (*(Il2CppClass **)(*plVar7 + 0x40) !=
        (
        TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_UnityEngine::GameObject>
        ->_0).element_class) {
code_?:
      FUN_?(plVar7,pKVar8);
      goto code_?;
    }
    this = (GameObject *)plVar7[3];
    if (this == (GameObject *)0x0) {
code_?:
      plVar7 = (longlong *)FUN_?();
      goto code_?;
    }
    mf = (MeshFilter *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                   (this,
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                   );
    pGVar9 = (cm->fields)._.gameObject;
    if (pGVar9 == (GameObject *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)pGVar9,(MethodInfo *)0x0);
    pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)this,(MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::String::String_Concat_5
                       (pSVar10,pSVar11,StringLiteral__obj,(MethodInfo *)0x0);
    pKVar8 = (KeyValuePair_2_MV_WorldObject_IntVector_UnityEngine_GameObject___Class *)0x0;
    ObjExporterScript_MeshToFile(mf,pSVar10,0,(MethodInfo *)0x0);
    pGVar9 = (cm->fields)._.gameObject;
    if (pGVar9 == (GameObject *)0x0) {
      FUN_?();
      goto code_?;
    }
    pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)pGVar9,(MethodInfo *)0x0);
    pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                       ((Object_1 *)this,(MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::String::String_Concat_6
                       (StringLiteral_Saved_obj_file_,pSVar10,pSVar11,StringLiteral__obj,
                        (MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar10,(MethodInfo *)0x0);
  } while( true );
}


/* Void MeshToFile(MeshFilter, String, Boolean) */

void Assembly-CSharp.dll::ObjExporterScript::ObjExporterScript_MeshToFile
               (MeshFilter *mf,String *filename,bool append,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IO__StreamWriter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (StreamWriter *)FUN_?(TypeInfo__System__IO__StreamWriter);
  mscorlib.dll::System::IO::StreamWriter::StreamWriter__ctor_5
            (this,filename,append,(MethodInfo *)0x0);
  pSVar1 = ObjExporterScript_MeshToString(mf,(MethodInfo *)0x0);
  if (this != (StreamWriter *)0x0) {
    (*(this->klass->vtable).WriteLine_1.methodPtr)
              (this,pSVar1,(this->klass->vtable).WriteLine_1.method);
    if (this != (StreamWriter *)0x0) {
      FUN_?(0,TypeInfo__System__IDisposable);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String MeshToString(MeshFilter) */

String * Assembly-CSharp.dll::ObjExporterScript::ObjExporterScript_MeshToString
                   (MeshFilter *mf,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Text__StringBuilder);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vt2__0___1_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vt1__0___1_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_usemtl_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_g_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vt__0___1_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_f__0___0___0___1___1___1___2___2);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_usemap_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vn__0___1___2_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_v__0___1___2_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vc__0___1___2___3_u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (mf != (MeshFilter *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                     (mf,(MethodInfo *)0x0);
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)mf,
                         UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                        );
    if (pOVar1 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar2 = pOVar1[1].klass;
      if (pOVar2 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      pcRam_? = pcVar3;
      lVar6 = (*pcRam_?)(pOVar2);
      this_00 = (StringBuilder *)FUN_?(TypeInfo__System__Text__StringBuilder);
      mscorlib.dll::System::Text::StringBuilder::StringBuilder__ctor(this_00,(MethodInfo *)0x0);
      if (this_00 != (StringBuilder *)0x0) {
        pSVar7 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (this_00,StringLiteral_g_,(MethodInfo *)0x0);
        pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                            ((Object_1 *)mf,(MethodInfo *)0x0);
        if (((pSVar7 != (StringBuilder *)0x0) &&
            (pSVar7 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                 (pSVar7,pSVar4,(MethodInfo *)0x0),
            pSVar7 != (StringBuilder *)0x0)) &&
           (mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (pSVar7,StringLiteral_u000A,(MethodInfo *)0x0), this != (Mesh *)0x0)) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices
                              (this,(MethodInfo *)0x0);
          uVar9 = 0;
          if (pVVar8 != (Vector3__Array *)0x0) {
            pVVar10 = pVVar8->vector;
            for (; (int)uVar9 < (int)pVVar8->max_length; uVar9 = uVar9 + 1) {
              if ((uint)pVVar8->max_length <= uVar9) goto code_?;
              uVar11 = pVVar10->x;
              uVar12 = pVVar10->y;
              fVar13 = pVVar10->z;
              afStackX_8[0] = (float)uVar11;
              pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
              afStackX_8[0] = (float)uVar12;
              pOVar14 = (Object *)FUN_?(uRam_?,afStackX_8);
              afStackX_8[0] = fVar13;
              pOVar15 = (Object *)FUN_?(uRam_?,afStackX_8);
              pSVar4 = StringLiteral_v__0___1___2_u000A;
              PStack_16._arg0 = (Object *)0x0;
              PStack_16._arg1 = (Object *)0x0;
              PStack_16._arg2 = (Object *)0x0;
              PStack_16._args = (Object__Array *)0x0;
              mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
                        (&PStack_16,pOVar1,pOVar14,pOVar15,(MethodInfo *)0x0);
              PStack_17._arg0 = PStack_16._arg0;
              PStack_17._arg1 = PStack_16._arg1;
              PStack_17._arg2 = PStack_16._arg2;
              PStack_17._args = PStack_16._args;
              pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                                  ((IFormatProvider *)0x0,pSVar4,&PStack_17,(MethodInfo *)0x0);
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                        (this_00,pSVar4,(MethodInfo *)0x0);
              pVVar10 = pVVar10 + 1;
            }
            mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                      (this_00,StringLiteral_u000A,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&
                            UnityEngine__Vector3__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute_____
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar18 = 
            UnityEngine__Vector3__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute_____
            ;
            if ((
                UnityEngine__Vector3__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute_____
                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(
                           UnityEngine__Vector3__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute_____
                           );
            }
            p_Var25 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                      Mesh_GetAllocArrayFromChannel_10
                                (this,VertexAttribute__Enum_Normal,
                                 VertexAttributeFormat__Enum_Float32,3,
                                 ((pMVar18->field7_0x38).rgctx_data)->method);
            uVar9 = 0;
            if (p_Var25 != (_Il2CppFullySharedGenericType__Array *)0x0) {
              pp_Var34 = p_Var25->vector;
              for (; (int)uVar9 < (int)p_Var25->max_length; uVar9 = uVar9 + 1) {
                if ((uint)p_Var25->max_length <= uVar9) goto code_?;
                p_Var4 = *pp_Var34;
                afStackX_8[0] = SUB84(p_Var4,0);
                fVar13 = *(float *)(pp_Var34 + 1);
                pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
                afStackX_8[0] = (float)((ulonglong)p_Var4 >> 0x20);
                pOVar14 = (Object *)FUN_?(uRam_?,afStackX_8);
                afStackX_8[0] = fVar13;
                pOVar15 = (Object *)FUN_?(uRam_?,afStackX_8);
                pSVar4 = StringLiteral_vn__0___1___2_u000A;
                PStack_16._arg0 = (Object *)0x0;
                PStack_16._arg1 = (Object *)0x0;
                PStack_16._arg2 = (Object *)0x0;
                PStack_16._args = (Object__Array *)0x0;
                mscorlib.dll::System::ParamsArray::ParamsArray__ctor_2
                          (&PStack_16,pOVar1,pOVar14,pOVar15,(MethodInfo *)0x0);
                PStack_17._arg0 = PStack_16._arg0;
                PStack_17._arg1 = PStack_16._arg1;
                PStack_17._arg2 = PStack_16._arg2;
                PStack_17._args = PStack_16._args;
                pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                                    ((IFormatProvider *)0x0,pSVar4,&PStack_17,(MethodInfo *)0x0);
                mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                          (this_00,pSVar4,(MethodInfo *)0x0);
                pp_Var34 = (_Il2CppFullySharedGenericType **)((longlong)pp_Var34 + 0xc);
              }
              mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                        (this_00,StringLiteral_u000A,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&
                              UnityEngine__Vector2__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute_____
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar18 = 
              UnityEngine__Vector2__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute_____
              ;
              if ((
                  UnityEngine__Vector2__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute_____
                  ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                FUN_?(
                             UnityEngine__Vector2__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute_____
                             );
              }
              p_Var25 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                        Mesh_GetAllocArrayFromChannel_10
                                  (this,VertexAttribute__Enum_TexCoord0,
                                   VertexAttributeFormat__Enum_Float32,2,
                                   ((pMVar18->field7_0x38).rgctx_data)->method);
              uVar9 = 0;
              if (p_Var25 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                pp_Var34 = p_Var25->vector;
                for (; (int)uVar9 < (int)p_Var25->max_length; uVar9 = uVar9 + 1) {
                  if ((uint)p_Var25->max_length <= uVar9) goto code_?;
                  afStackX_8[0] = *(float *)pp_Var34;
                  fVar13 = *(float *)((longlong)pp_Var34 + 4);
                  pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
                  afStackX_8[0] = fVar13;
                  pOVar14 = (Object *)FUN_?(uRam_?,afStackX_8);
                  pSVar4 = StringLiteral_vt__0___1_u000A;
                  PStack_16._arg0 = (Object *)0x0;
                  PStack_16._arg1 = (Object *)0x0;
                  PStack_16._arg2 = (Object *)0x0;
                  PStack_16._args = (Object__Array *)0x0;
                  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                            (&PStack_16,pOVar1,pOVar14,(MethodInfo *)0x0);
                  PStack_17._arg0 = PStack_16._arg0;
                  PStack_17._arg1 = PStack_16._arg1;
                  PStack_17._arg2 = PStack_16._arg2;
                  PStack_17._args = PStack_16._args;
                  pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                                      ((IFormatProvider *)0x0,pSVar4,&PStack_17,(MethodInfo *)0x0);
                  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (this_00,pSVar4,(MethodInfo *)0x0);
                  pp_Var34 = pp_Var34 + 1;
                }
                mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                          (this_00,StringLiteral_u000A,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&
                                UnityEngine__Vector2__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute_____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar18 = 
                UnityEngine__Vector2__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute_____
                ;
                if ((
                    UnityEngine__Vector2__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute_____
                    ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                  FUN_?(
                               UnityEngine__Vector2__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute_____
                               );
                }
                p_Var25 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                          Mesh_GetAllocArrayFromChannel_10
                                    (this,VertexAttribute__Enum_TexCoord1,
                                     VertexAttributeFormat__Enum_Float32,2,
                                     ((pMVar18->field7_0x38).rgctx_data)->method);
                uVar9 = 0;
                if (p_Var25 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                  pp_Var34 = p_Var25->vector;
                  for (; (int)uVar9 < (int)p_Var25->max_length; uVar9 = uVar9 + 1) {
                    if ((uint)p_Var25->max_length <= uVar9) goto code_?;
                    afStackX_8[0] = *(float *)pp_Var34;
                    fVar13 = *(float *)((longlong)pp_Var34 + 4);
                    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
                    afStackX_8[0] = fVar13;
                    pOVar14 = (Object *)FUN_?(uRam_?,afStackX_8);
                    pSVar4 = StringLiteral_vt1__0___1_u000A;
                    PStack_16._arg0 = (Object *)0x0;
                    PStack_16._arg1 = (Object *)0x0;
                    PStack_16._arg2 = (Object *)0x0;
                    PStack_16._args = (Object__Array *)0x0;
                    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                              (&PStack_16,pOVar1,pOVar14,(MethodInfo *)0x0);
                    PStack_17._arg0 = PStack_16._arg0;
                    PStack_17._arg1 = PStack_16._arg1;
                    PStack_17._arg2 = PStack_16._arg2;
                    PStack_17._args = PStack_16._args;
                    pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                                        ((IFormatProvider *)0x0,pSVar4,&PStack_17,(MethodInfo *)0x0
                                        );
                    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                              (this_00,pSVar4,(MethodInfo *)0x0);
                    pp_Var34 = pp_Var34 + 1;
                  }
                  mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                            (this_00,StringLiteral_u000A,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  UnityEngine__Vector2__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute_____
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar18 = 
                  UnityEngine__Vector2__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute_____
                  ;
                  if ((
                      UnityEngine__Vector2__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute_____
                      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                    FUN_?(
                                 UnityEngine__Vector2__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Vector2>_UnityEngine__Rendering__VertexAttribute_____
                                 );
                  }
                  p_Var25 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                            Mesh_GetAllocArrayFromChannel_10
                                      (this,VertexAttribute__Enum_TexCoord1,
                                       VertexAttributeFormat__Enum_Float32,2,
                                       ((pMVar18->field7_0x38).rgctx_data)->method);
                  uVar9 = 0;
                  if (p_Var25 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                    pp_Var34 = p_Var25->vector;
                    for (; (int)uVar9 < (int)p_Var25->max_length; uVar9 = uVar9 + 1) {
                      if ((uint)p_Var25->max_length <= uVar9) goto code_?;
                      afStackX_8[0] = *(float *)pp_Var34;
                      fVar13 = *(float *)((longlong)pp_Var34 + 4);
                      pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
                      afStackX_8[0] = fVar13;
                      pOVar14 = (Object *)FUN_?(uRam_?,afStackX_8);
                      pSVar4 = StringLiteral_vt2__0___1_u000A;
                      PStack_16._arg0 = (Object *)0x0;
                      PStack_16._arg1 = (Object *)0x0;
                      PStack_16._arg2 = (Object *)0x0;
                      PStack_16._args = (Object__Array *)0x0;
                      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                                (&PStack_16,pOVar1,pOVar14,(MethodInfo *)0x0);
                      PStack_17._arg0 = PStack_16._arg0;
                      PStack_17._arg1 = PStack_16._arg1;
                      PStack_17._arg2 = PStack_16._arg2;
                      PStack_17._args = PStack_16._args;
                      pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                                          ((IFormatProvider *)0x0,pSVar4,&PStack_17,
                                           (MethodInfo *)0x0);
                      mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                (this_00,pSVar4,(MethodInfo *)0x0);
                      pp_Var34 = pp_Var34 + 1;
                    }
                    mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                              (this_00,StringLiteral_u000A,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    UnityEngine__Color__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute_____
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar18 = 
                    UnityEngine__Color__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute_____
                    ;
                    if ((
                        UnityEngine__Color__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute_____
                        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                      FUN_?(
                                   UnityEngine__Color__MethodInfo__UnityEngine__Mesh__GetAllocArrayFromChannel<UnityEngine::Color>_UnityEngine__Rendering__VertexAttribute_____
                                   );
                    }
                    p_Var25 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                              Mesh_GetAllocArrayFromChannel_10
                                        (this,VertexAttribute__Enum_Color,
                                         VertexAttributeFormat__Enum_Float32,4,
                                         ((pMVar18->field7_0x38).rgctx_data)->method);
                    uVar9 = 0;
                    if (p_Var25 != (_Il2CppFullySharedGenericType__Array *)0x0) {
                      pp_Var34 = p_Var25->vector;
                      for (; (int)uVar9 < (int)p_Var25->max_length; uVar9 = uVar9 + 1) {
                        if ((uint)p_Var25->max_length <= uVar9) goto code_?;
                        fVar13 = *(float *)pp_Var34;
                        fVar19 = *(float *)((longlong)pp_Var34 + 4);
                        fVar20 = *(float *)(pp_Var34 + 1);
                        fVar21 = *(float *)((longlong)pp_Var34 + 0xc);
                        args = (Object__Array *)FUN_?(TypeInfo__System__Object,4);
                        afStackX_8[0] = fVar13;
                        pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
                        if (args == (Object__Array *)0x0) goto code_?;
                        if ((pOVar1 != (Object *)0x0) &&
                           (lVar22 = FUN_?(pOVar1,(args->klass->_0).element_class),
                           lVar22 == 0)) {
                          uVar5 = FUN_?();
                          FUN_?(uVar5,0);
                          pcVar3 = (code *)swi(3);
                          pSVar4 = (String *)(*pcVar3)();
                          return pSVar4;
                        }
                        if ((int)args->max_length == 0) goto code_?;
                        bVar23 = iRam_? != 0;
                        args->vector[0] = pOVar1;
                        if (bVar23) {
                          uVar24 = (uint)((ulonglong)args->vector >> 0xc);
                          uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
                          do {
                            uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
                            puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
                            LOCK();
                            bVar23 = uVar26 == *puVar27;
                            if (bVar23) {
                              *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar23);
                        }
                        afStackX_8[0] = fVar19;
                        pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
                        if ((pOVar1 != (Object *)0x0) &&
                           (lVar22 = FUN_?(pOVar1,(args->klass->_0).element_class),
                           lVar22 == 0)) {
                          uVar5 = FUN_?();
                          FUN_?(uVar5,0);
                          pcVar3 = (code *)swi(3);
                          pSVar4 = (String *)(*pcVar3)();
                          return pSVar4;
                        }
                        if ((uint)args->max_length < 2) goto code_?;
                        bVar23 = iRam_? != 0;
                        args->vector[1] = pOVar1;
                        if (bVar23) {
                          uVar24 = (uint)((ulonglong)(args->vector + 1) >> 0xc);
                          uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
                          do {
                            uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
                            puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
                            LOCK();
                            bVar23 = uVar26 == *puVar27;
                            if (bVar23) {
                              *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar23);
                        }
                        afStackX_8[0] = fVar20;
                        pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
                        if ((pOVar1 != (Object *)0x0) &&
                           (lVar22 = FUN_?(pOVar1,(args->klass->_0).element_class),
                           lVar22 == 0)) {
                          uVar5 = FUN_?();
                          FUN_?(uVar5,0);
                          pcVar3 = (code *)swi(3);
                          pSVar4 = (String *)(*pcVar3)();
                          return pSVar4;
                        }
                        if ((uint)args->max_length < 3) goto code_?;
                        bVar23 = iRam_? != 0;
                        args->vector[2] = pOVar1;
                        if (bVar23) {
                          uVar24 = (uint)((ulonglong)(args->vector + 2) >> 0xc);
                          uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
                          do {
                            uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
                            puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
                            LOCK();
                            bVar23 = uVar26 == *puVar27;
                            if (bVar23) {
                              *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar23);
                        }
                        afStackX_8[0] = fVar21;
                        pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
                        if ((pOVar1 != (Object *)0x0) &&
                           (lVar22 = FUN_?(pOVar1,(args->klass->_0).element_class),
                           lVar22 == 0)) {
                          uVar5 = FUN_?();
                          FUN_?(uVar5,0);
                          pcVar3 = (code *)swi(3);
                          pSVar4 = (String *)(*pcVar3)();
                          return pSVar4;
                        }
                        if ((uint)args->max_length < 4) goto code_?;
                        bVar23 = iRam_? != 0;
                        args->vector[3] = pOVar1;
                        if (bVar23) {
                          uVar24 = (uint)((ulonglong)(args->vector + 3) >> 0xc);
                          uVar25 = (ulonglong)((uVar24 & 0x1fffff) >> 6);
                          do {
                            uVar26 = *(ulonglong *)(uVar25 * 8 + 0xADDR);
                            puVar27 = (ulonglong *)(uVar25 * 8 + 0xADDR);
                            LOCK();
                            bVar23 = uVar26 == *puVar27;
                            if (bVar23) {
                              *puVar27 = uVar26 | 1L << (uVar24 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar23);
                        }
                        pSVar4 = StringLiteral_vc__0___1___2___3_u000A;
                        PStack_16._arg0 = (Object *)0x0;
                        PStack_16._arg1 = (Object *)0x0;
                        PStack_16._arg2 = (Object *)0x0;
                        PStack_16._args = (Object__Array *)0x0;
                        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3
                                  (&PStack_16,args,(MethodInfo *)0x0);
                        PStack_17._arg0 = PStack_16._arg0;
                        PStack_17._arg1 = PStack_16._arg1;
                        PStack_17._arg2 = PStack_16._arg2;
                        PStack_17._args = PStack_16._args;
                        pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                                            ((IFormatProvider *)0x0,pSVar4,&PStack_17,
                                             (MethodInfo *)0x0);
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                  (this_00,pSVar4,(MethodInfo *)0x0);
                        pp_Var34 = pp_Var34 + 2;
                      }
                      uVar9 = 0;
                      puVar28 = (undefined8 *)(lVar6 + 0x20);
                      while( true ) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar29 = (this->fields)._.m_CachedPtr;
                        if (pvVar29 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)this,(MethodInfo *)0x0);
                          pcVar3 = (code *)swi(3);
                          pSVar4 = (String *)(*pcVar3)();
                          return pSVar4;
                        }
                        pcVar3 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)
                           ) {
                          uVar5 = func_?(&UNK_?);
                          FUN_?(uVar5,0);
                          pcVar3 = (code *)swi(3);
                          pSVar4 = (String *)(*pcVar3)();
                          return pSVar4;
                        }
                        pcRam_? = pcVar3;
                        iVar30 = (*pcRam_?)(pvVar29);
                        if (iVar30 <= (int)uVar9) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          pSVar4 = (String *)
                                    (*(this_00->klass->vtable).ToString.methodPtr)
                                              (this_00,(this_00->klass->vtable).ToString.method);
                          return pSVar4;
                        }
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                  (this_00,StringLiteral_u000A,(MethodInfo *)0x0);
                        pSVar7 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                            (this_00,StringLiteral_usemtl_,(MethodInfo *)0x0);
                        if (lVar6 == 0) break;
                        if (*(uint *)(lVar6 + 0x18) <= uVar9) {
code_?:
                          FUN_?();
                          pcVar3 = (code *)swi(3);
                          pSVar4 = (String *)(*pcVar3)();
                          return pSVar4;
                        }
                        if ((((Object_1 *)*puVar28 == (Object_1 *)0x0) ||
                            (pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                       Object_1_GetName((Object_1 *)*puVar28,(MethodInfo *)0x0),
                            pSVar7 == (StringBuilder *)0x0)) ||
                           (pSVar7 = mscorlib.dll::System::Text::StringBuilder::
                                      StringBuilder_Append_2(pSVar7,pSVar4,(MethodInfo *)0x0),
                           pSVar7 == (StringBuilder *)0x0)) break;
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                  (pSVar7,StringLiteral_u000A,(MethodInfo *)0x0);
                        pSVar7 = mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                            (this_00,StringLiteral_usemap_,(MethodInfo *)0x0);
                        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto code_?;
                        if ((((Object_1 *)*puVar28 == (Object_1 *)0x0) ||
                            (pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                       Object_1_GetName((Object_1 *)*puVar28,(MethodInfo *)0x0),
                            pSVar7 == (StringBuilder *)0x0)) ||
                           (pSVar7 = mscorlib.dll::System::Text::StringBuilder::
                                      StringBuilder_Append_2(pSVar7,pSVar4,(MethodInfo *)0x0),
                           pSVar7 == (StringBuilder *)0x0)) break;
                        mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                  (pSVar7,StringLiteral_u000A,(MethodInfo *)0x0);
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__System__Int32);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        bVar31 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                 Mesh_CheckCanAccessSubmesh(this,uVar9,1,(MethodInfo *)0x0);
                        if (bVar31 == 0) {
                          pIVar32 = (Int32__Array *)FUN_?(TypeInfo__System__Int32);
                        }
                        else {
                          iVar33 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_lodCount
                                             (this,(MethodInfo *)0x0);
                          if (iVar33 < 1) {
                            afStackX_8[0] = 0.0;
                            pOVar1 = (Object *)func_?(uRam_?);
                            afStackX_8[0] =
                                 (float)UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                        Mesh_get_lodCount(this,(MethodInfo *)0x0);
                            pOVar14 = (Object *)func_?(uRam_?,afStackX_8)
                            ;
                            pSVar4 = (String *)
                                      func_?(&
                                                  StringLiteral_The_Mesh_LOD_index___0___must_be);
                            pSVar4 = mscorlib.dll::System::String::String_Format_1
                                                (pSVar4,pOVar1,pOVar14,(MethodInfo *)0x0);
                            uVar5 = func_?(&TypeInfo__System__IndexOutOfRangeException
                                                        );
                            this_01 = (IndexOutOfRangeException *)func_?(uVar5);
                            mscorlib.dll::System::IndexOutOfRangeException::
                            IndexOutOfRangeException__ctor_1(this_01,pSVar4,(MethodInfo *)0x0);
                            uVar5 = func_?(&
                                                  MethodInfo__UnityEngine__Mesh__GetTriangles_int__int__bool_
                                                  );
                            FUN_?(this_01,uVar5);
                            pcVar3 = (code *)swi(3);
                            pSVar4 = (String *)(*pcVar3)();
                            return pSVar4;
                          }
                          pIVar32 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                    Mesh_GetTrianglesImpl(this,uVar9,1,0,(MethodInfo *)0x0);
                        }
                        piVar34 = pIVar32->vector + 1;
                        uVar24 = 0;
                        if (pIVar32 == (Int32__Array *)0x0) break;
                        for (; uVar35 = (uint)pIVar32->max_length, (int)uVar24 < (int)uVar35;
                            uVar24 = uVar24 + 3) {
                          if (uVar35 <= uVar24) goto code_?;
                          afStackX_8[0] = (float)(piVar34[-1] + 1);
                          pOVar1 = (Object *)FUN_?(uRam_?,afStackX_8);
                          if ((uint)pIVar32->max_length <= uVar24 + 1) goto code_?;
                          afStackX_8[0] = (float)(*piVar34 + 1);
                          pOVar14 = (Object *)FUN_?(uRam_?,afStackX_8);
                          if ((uint)pIVar32->max_length <= uVar24 + 2) goto code_?;
                          afStackX_8[0] = (float)(piVar34[1] + 1);
                          pOVar15 = (Object *)FUN_?(uRam_?,afStackX_8);
                          pSVar4 = mscorlib.dll::System::String::String_Format_2
                                              (StringLiteral_f__0___0___0___1___1___1___2___2,
                                               pOVar1,pOVar14,pOVar15,(MethodInfo *)0x0);
                          mscorlib.dll::System::Text::StringBuilder::StringBuilder_Append_2
                                    (this_00,pSVar4,(MethodInfo *)0x0);
                          piVar34 = piVar34 + 3;
                        }
                        uVar9 = uVar9 + 1;
                        puVar28 = puVar28 + 1;
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar3)();
  return pSVar4;
}

