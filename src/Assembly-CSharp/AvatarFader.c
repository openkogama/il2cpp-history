
/* Void AddFadeMaterial(Material) */

void Assembly-CSharp.dll::AvatarFader::AvatarFader_AddFadeMaterial
               (AvatarFader *this,Material *addRenderer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_;
  pLVar2 = (this->fields).avatarMaterials;
  if (pLVar2 == (List_1_UnityEngine_Material_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pMVar4 = (pLVar2->fields)._items;
  piVar5 = &(pLVar2->fields)._version;
  *piVar5 = *piVar5 + 1;
  if (pMVar4 == (Material__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = (pLVar2->fields)._size;
  if (uVar6 < (uint)pMVar4->max_length) {
    (pLVar2->fields)._size = uVar6 + 1;
  }
  else {
    uVar6 = (pLVar2->fields)._size;
    FUN_?(pLVar2,uVar6 + 1,
                  (pMVar1->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy,
                  pMVar4,unaff_RDI);
    pMVar4 = (pLVar2->fields)._items;
    (pLVar2->fields)._size = uVar6 + 1;
    if (pMVar4 == (Material__Array *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((uint)pMVar4->max_length <= uVar6) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar7 = iRam_? != 0;
  pMVar4->vector[(int)uVar6] = addRenderer;
  if (bVar7) {
    uVar6 = (uint)((ulonglong)(pMVar4->vector + (int)uVar6) >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return;
}


/* Shader GetShader(Shader, Boolean) */

Shader * Assembly-CSharp.dll::AvatarFader::AvatarFader_GetShader
                   (AvatarFader *this,Shader *currShader,bool fading,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__TryGetValue_System__String__UnityEngine__Shader__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apSStack_1[0] = (Shader *)0x0;
  if (fading == 0) {
    pDVar2 = (this->fields).normalShadersDictionary;
    if ((currShader != (Shader *)0x0) &&
       (pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                           ((Object_1 *)currShader,(MethodInfo *)0x0),
       pDVar2 != (Dictionary_2_System_String_UnityEngine_Shader_ *)0x0)) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)pSVar3,
                         (Object **)apSStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__TryGetValue_System__String__UnityEngine__Shader__
                        );
      if (bVar4 != 0) {
        return apSStack_1[0];
      }
      if (apSStack_1[0] != (Shader *)0x0) {
        currShader = apSStack_1[0];
      }
      return currShader;
    }
  }
  else {
    (this->fields).changedShaders = 1;
    pDVar2 = (this->fields).fadeShadersDictionary;
    if ((currShader != (Shader *)0x0) &&
       (pSVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                           ((Object_1 *)currShader,(MethodInfo *)0x0),
       pDVar2 != (Dictionary_2_System_String_UnityEngine_Shader_ *)0x0)) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)pSVar3,
                         (Object **)apSStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__TryGetValue_System__String__UnityEngine__Shader__
                        );
      if (bVar4 != 0) {
        return apSStack_1[0];
      }
      if (apSStack_1[0] != (Shader *)0x0) {
        currShader = apSStack_1[0];
      }
      return currShader;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar6 = (Shader *)(*pcVar5)();
  return pSVar6;
}


/* Void RemoveFadeMaterial(Material) */

void Assembly-CSharp.dll::AvatarFader::AvatarFader_RemoveFadeMaterial
               (AvatarFader *this,Material *removeMaterial,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Remove_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Remove_UnityEngine__Material_
  ;
  this_00 = (this->fields).avatarMaterials;
  if (this_00 != (List_1_UnityEngine_Material_ *)0x0) {
    index = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((Object__Array *)(this_00->fields)._items,(Object *)removeMaterial,0,
                       (this_00->fields)._size,
                       (MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Remove_UnityEngine__Material_
                        ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    if (index < 0) {
      return;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAt
              ((List_1_System_Object_ *)this_00,index,pMVar1->klass->rgctx_data[0x2b].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetTransparency(Single) */

void Assembly-CSharp.dll::AvatarFader::AvatarFader_SetTransparency
               (AvatarFader *this,float fadeFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SM3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  if ((fadeFactor == _UNK_?) && ((this->fields).fading == 0)) {
    return;
  }
  bVar2 = fadeFactor == _UNK_?;
  (this->fields).fading = fadeFactor < _UNK_?;
  if (bVar2) {
    (this->fields).changedShaders = 0;
    (this->fields).prevFading = 0;
  }
  pLVar3 = (this->fields).avatarMaterials;
  index = 0;
  if (pLVar3 != (List_1_UnityEngine_Material_ *)0x0) {
    lVar4 = 0x20;
    do {
      if ((pLVar3->fields)._size <= (int)index) {
        if ((this->fields).changedShaders == 0) {
          return;
        }
        (this->fields).prevFading = 1;
        return;
      }
      pLVar3 = (this->fields).avatarMaterials;
      if (pLVar3 == (List_1_UnityEngine_Material_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pMVar6 = (pLVar3->fields)._items;
      if (pMVar6 == (Material__Array *)0x0) break;
      if ((uint)pMVar6->max_length <= index) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = *(Material **)((longlong)pMVar6->vector + lVar4 + -0x20);
      pMStackX_20 = this_00;
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
      if (this_00 == (Material *)0x0) {
code_?:
        pLVar3 = (this->fields).avatarMaterials;
        if (pLVar3 == (List_1_UnityEngine_Material_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar3,index,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                  );
        index = index - 1;
        lVar4 = lVar4 + -8;
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
        if ((this->fields).prevFading == 0) {
          pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                             (this_00,(MethodInfo *)0x0);
          pSVar7 = AvatarFader_GetShader(this,pSVar7,(this->fields).fading,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                    (this_00,pSVar7,(MethodInfo *)0x0);
          if ((pSVar7 == (Shader *)0x0) ||
             (pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                 ((Object_1 *)pSVar7,(MethodInfo *)0x0), pSVar8 == (String *)0x0))
          break;
          bVar9 = mscorlib.dll::System::String::String_Contains
                            (pSVar8,StringLiteral_CubeModel,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                               ((Object_1 *)pSVar7,(MethodInfo *)0x0);
            if (pSVar8 == (String *)0x0) break;
            bVar9 = mscorlib.dll::System::String::String_Contains
                              (pSVar8,StringLiteral_SM3,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
              FUN_?();
            }
            TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
                      (&pMStackX_20,bVar9,(MethodInfo *)0x0);
            this_00 = pMStackX_20;
          }
        }
        if (this_00 == (Material *)0x0) break;
        iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          ((this->fields).transparencyProperty,(MethodInfo *)0x0);
        bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                          (this_00,iVar10,(MethodInfo *)0x0);
        if (bVar9 == 0) {
          iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            ((this->fields).colorProperty,(MethodInfo *)0x0);
          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                            (this_00,iVar10,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                              ((this->fields).tintProperty,(MethodInfo *)0x0);
            bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                              (this_00,iVar10,(MethodInfo *)0x0);
            if (bVar9 != 0) {
              pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                                  (&CStack_12,this_00,(this->fields).tintProperty,(MethodInfo *)0x0)
              ;
              CStack_13.r = pCVar11->r;
              CStack_13.g = pCVar11->g;
              CStack_13.b = pCVar11->b;
              CStack_13.a = fadeFactor;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                        (this_00,(this->fields).tintProperty,&CStack_13,(MethodInfo *)0x0);
            }
          }
          else {
            pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                (aCStack_14,this_00,(MethodInfo *)0x0);
            CStack_13.r = pCVar11->r;
            CStack_13.g = pCVar11->g;
            CStack_13.b = pCVar11->b;
            CStack_13.a = fadeFactor;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      (this_00,&CStack_13,(MethodInfo *)0x0);
          }
        }
        else {
          iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            ((this->fields).transparencyProperty,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                    (this_00,iVar10,fVar1 - fadeFactor,(MethodInfo *)0x0);
        }
      }
      pLVar3 = (this->fields).avatarMaterials;
      index = index + 1;
      lVar4 = lVar4 + 8;
    } while (pLVar3 != (List_1_UnityEngine_Material_ *)0x0);
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarFader::AvatarFader_Start(AvatarFader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Add_System__String__UnityEngine__Shader_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Dictionary_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).normalShaders;
  if (pAVar1 != (AvatarFader_ShaderFaderInstruction__Array *)0x0) {
    pDVar2 = (Dictionary_2_System_String_UnityEngine_Shader_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>
                          );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object___ctor_5
              ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(int32_t)pAVar1->max_length,
               (IEqualityComparer_1_System_Object_ *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Dictionary_int_
               ->klass->rgctx_data->method);
    bVar3 = iRam_? != 0;
    (this->fields).normalShadersDictionary = pDVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).normalShadersDictionary >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pAVar1 = (this->fields).fadeShaders;
    if (pAVar1 != (AvatarFader_ShaderFaderInstruction__Array *)0x0) {
      pDVar2 = (Dictionary_2_System_String_UnityEngine_Shader_ *)
               FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>
                            );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object___ctor_5
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(int32_t)pAVar1->max_length,
                 (IEqualityComparer_1_System_Object_ *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Dictionary_int_
                 ->klass->rgctx_data->method);
      bVar3 = iRam_? != 0;
      (this->fields).fadeShadersDictionary = pDVar2;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).fadeShadersDictionary >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pAVar1 = (this->fields).normalShaders;
      if (pAVar1 != (AvatarFader_ShaderFaderInstruction__Array *)0x0) {
        lVar5 = (longlong)(int)pAVar1->max_length;
        uVar4 = 0;
        if (0 < lVar5) {
          lVar8 = 0;
          lVar9 = 0;
          do {
            pAVar1 = (this->fields).normalShaders;
            if (pAVar1 == (AvatarFader_ShaderFaderInstruction__Array *)0x0)
            goto code_?;
            if ((uint)pAVar1->max_length <= uVar4) goto code_?;
            pDVar2 = (this->fields).normalShadersDictionary;
            if (pDVar2 == (Dictionary_2_System_String_UnityEngine_Shader_ *)0x0)
            goto code_?;
            pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Add_System__String__UnityEngine__Shader_
                     ->klass->rgctx_data[0x22].method;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar2,
                       *(Object **)((longlong)&pAVar1->vector[0].originShader + lVar9),
                       *(Object **)((longlong)&pAVar1->vector[0].replacingShader + lVar9),
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),2),pMVar10);
            uVar4 = uVar4 + 1;
            lVar8 = lVar8 + 1;
            lVar9 = lVar9 + 0x18;
          } while (lVar8 < lVar5);
        }
        pAVar1 = (this->fields).fadeShaders;
        if (pAVar1 != (AvatarFader_ShaderFaderInstruction__Array *)0x0) {
          lVar5 = (longlong)(int)pAVar1->max_length;
          uVar4 = 0;
          if (0 < lVar5) {
            lVar8 = 0;
            lVar9 = 0;
            do {
              pAVar1 = (this->fields).fadeShaders;
              if (pAVar1 == (AvatarFader_ShaderFaderInstruction__Array *)0x0)
              goto code_?;
              if ((uint)pAVar1->max_length <= uVar4) goto code_?;
              pDVar2 = (this->fields).fadeShadersDictionary;
              if (pDVar2 == (Dictionary_2_System_String_UnityEngine_Shader_ *)0x0)
              goto code_?;
              pMVar10 = MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Add_System__String__UnityEngine__Shader_
                       ->klass->rgctx_data[0x22].method;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar2,
                         *(Object **)((longlong)&pAVar1->vector[0].originShader + lVar9),
                         *(Object **)((longlong)&pAVar1->vector[0].replacingShader + lVar9),
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar10 >> 8),2),pMVar10)
              ;
              uVar4 = uVar4 + 1;
              lVar8 = lVar8 + 1;
              lVar9 = lVar9 + 0x18;
            } while (lVar8 < lVar5);
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar11 = (this->fields)._._._._.m_CachedPtr;
          if (pvVar11 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pcRam_? = pcVar12;
          pvVar11 = (void *)(*pcRam_?)(pvVar11);
          this_00 = (Component *)
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar11,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (this_00 != (Component *)0x0) {
            pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                     Component_GetComponentsInChildren
                               (this_00,
                                UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                               );
            uVar4 = 0;
            if (pOVar14 != (Object__Array *)0x0) {
              ppOVar15 = pOVar14->vector;
code_?:
              if ((int)pOVar14->max_length <= (int)uVar4) {
                return;
              }
              if ((uint)pOVar14->max_length <= uVar4) {
code_?:
                FUN_?();
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              obj = *ppOVar15;
              if (obj != (Object *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOVar16 = obj[1].klass;
                if (pOVar16 == (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pcVar12 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                  uVar13 = func_?(&UNK_?);
                  FUN_?(uVar13,0);
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pcRam_? = pcVar12;
                lVar5 = (*pcRam_?)(pOVar16);
                uVar17 = 0;
                if (lVar5 == 0) goto code_?;
                for (; (int)uVar17 < (int)*(uint *)(lVar5 + 0x18); uVar17 = uVar17 + 1) {
                  if (*(uint *)(lVar5 + 0x18) <= uVar17) goto code_?;
                  if ((this->fields).avatarMaterials == (List_1_UnityEngine_Material_ *)0x0)
                  goto code_?;
                  FUN_?();
                }
                uVar4 = uVar4 + 1;
                ppOVar15 = ppOVar15 + 1;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* AvatarFader() */

void Assembly-CSharp.dll::AvatarFader::AvatarFader__ctor(AvatarFader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Material>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__TintColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Transparency);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).transparencyProperty = StringLiteral__Transparency;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).transparencyProperty >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).colorProperty = StringLiteral__Color;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).colorProperty >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).tintProperty = StringLiteral__TintColor;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).tintProperty >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_00 = (List_1_UnityEngine_Material_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Material>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
  bVar6 = iRam_? != 0;
  (this->fields).avatarMaterials = this_00;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarMaterials >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
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
  return;
}

