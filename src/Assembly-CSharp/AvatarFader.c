
/* Void AddFadeMaterial(Material) */

void Assembly-CSharp.dll::AvatarFader::AvatarFader_AddFadeMaterial
               (AvatarFader *this,Material *addRenderer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarMaterials;
  if (this_00 != (List_1_UnityEngine_Material_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)addRenderer,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Shader GetShader(Shader, Boolean) */

Shader * Assembly-CSharp.dll::AvatarFader::AvatarFader_GetShader
                   (AvatarFader *this,Shader *currShader,bool fading,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__TryGetValue_System__String__UnityEngine__Shader__
                   );
    cRam_? = '\x01';
  }
  pSStack_1 = (Shader *)0x0;
  if (fading == 0) {
    this_00 = (this->fields).normalShadersDictionary;
  }
  else {
    this_00 = (this->fields).fadeShadersDictionary;
    (this->fields).changedShaders = 1;
  }
  if (currShader != (Shader *)0x0) {
    key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                    ((Object_1 *)currShader,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_String_UnityEngine_Shader_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)key,
                         (Object **)&pSStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__TryGetValue_System__String__UnityEngine__Shader__
                        );
      if (bVar2 == 0) {
        if (pSStack_1 != (Shader *)0x0) {
          currShader = pSStack_1;
        }
        return currShader;
      }
      return pSStack_1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar4 = (Shader *)(*pcVar3)();
  return pSVar4;
}


/* Void RemoveFadeMaterial(Material) */

void Assembly-CSharp.dll::AvatarFader::AvatarFader_RemoveFadeMaterial
               (AvatarFader *this,Material *removeMaterial,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarMaterials;
  if (this_00 != (List_1_UnityEngine_Material_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              ((List_1_System_Object_ *)this_00,(Object *)removeMaterial,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Remove_UnityEngine__Material_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetTransparency(Single) */

void Assembly-CSharp.dll::AvatarFader::AvatarFader_SetTransparency
               (AvatarFader *this,float fadeFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__TextureAtlasData);
    func_?(&StringLiteral_SM3);
    func_?(&StringLiteral_CubeModel);
    cRam_? = '\x01';
  }
  RStack_1.First = 0;
  RStack_1.Last = 0;
  if ((fadeFactor == _UNK_?) && ((this->fields).fading == 0)) {
    return;
  }
  bVar2 = fadeFactor == _UNK_?;
  (this->fields).fading = fadeFactor < _UNK_?;
  if (bVar2) {
    (this->fields).changedShaders = 0;
    (this->fields).prevFading = 0;
  }
  index = 0;
  pLVar3 = (this->fields).avatarMaterials;
  while (pLVar3 != (List_1_UnityEngine_Material_ *)0x0) {
    if ((pLVar3->fields)._size <= index) {
      if ((this->fields).changedShaders == 0) {
        return;
      }
      (this->fields).prevFading = 1;
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).avatarMaterials;
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
    x = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                  (this_00,index,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                  );
    RStack_1 = x;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((this->fields).prevFading == 0) {
        if (RStack_1 == (RegexCharClass_SingleRange)0x0) break;
        pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                            ((Material *)RStack_1,(MethodInfo *)0x0);
        pSVar5 = AvatarFader_GetShader(this,pSVar5,(this->fields).fading,(MethodInfo *)0x0);
        if (((RStack_1 == (RegexCharClass_SingleRange)0x0) ||
            (UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                       ((Material *)RStack_1,pSVar5,(MethodInfo *)0x0), pSVar5 == (Shader *)0x0))
           || (pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                                   ((Object_1 *)pSVar5,(MethodInfo *)0x0), pSVar6 == (String *)0x0
              )) break;
        bVar4 = mscorlib.dll::System::String::String_Contains
                           (pSVar6,StringLiteral_CubeModel,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                              ((Object_1 *)pSVar5,(MethodInfo *)0x0);
          if (pSVar6 == (String *)0x0) break;
          mscorlib.dll::System::String::String_Contains(pSVar6,StringLiteral_SM3,(MethodInfo *)0x0)
          ;
          if ((TypeInfo__TextureAtlasData->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
                    ((Material **)&RStack_1,0,(MethodInfo *)0x0);
        }
      }
      if (RStack_1 == (RegexCharClass_SingleRange)0x0) break;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1
                         ((Material *)RStack_1,(this->fields).transparencyProperty,(MethodInfo *)0x0
                         );
      if (bVar4 == 0) {
        if (RStack_1 == (RegexCharClass_SingleRange)0x0) break;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1
                           ((Material *)RStack_1,(this->fields).colorProperty,(MethodInfo *)0x0);
        if (bVar4 == 0) {
          if (RStack_1 == (RegexCharClass_SingleRange)0x0) break;
          bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1
                             ((Material *)RStack_1,(this->fields).tintProperty,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            if (RStack_1 == (RegexCharClass_SingleRange)0x0) break;
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                                ((Vector4 *)&stack0xffffffd0,(Material *)RStack_1,
                                 (this->fields).tintProperty,(MethodInfo *)0x0);
            uVar8 = pVVar7->x;
            uVar9 = pVVar7->y;
            uVar10 = pVVar7->z;
            value_00.z = (float)uVar10;
            value_00.y = (float)uVar9;
            value_00.x = (float)uVar8;
            if (RStack_1 == (RegexCharClass_SingleRange)0x0) break;
            value_00.w = fadeFactor;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                      ((Material *)RStack_1,(this->fields).tintProperty,value_00,(MethodInfo *)0x0);
          }
        }
        else {
          if (RStack_1 == (RegexCharClass_SingleRange)0x0) break;
          pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                              ((Color *)&stack0xffffffc0,(Material *)RStack_1,(MethodInfo *)0x0);
          uVar12 = pCVar11->r;
          uVar13 = pCVar11->g;
          uVar14 = pCVar11->b;
          value.b = (float)uVar14;
          value.g = (float)uVar13;
          value.r = (float)uVar12;
          if (RStack_1 == (RegexCharClass_SingleRange)0x0) break;
          value.a = fadeFactor;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    ((Material *)RStack_1,value,(MethodInfo *)0x0);
        }
      }
      else {
        if (RStack_1 == (RegexCharClass_SingleRange)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                  ((Material *)RStack_1,(this->fields).transparencyProperty,
                   _UNK_? - fadeFactor,(MethodInfo *)0x0);
      }
    }
    else {
      pLVar3 = (this->fields).avatarMaterials;
      if (pLVar3 == (List_1_UnityEngine_Material_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar3,index,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                );
      index = index + -1;
    }
    index = index + 1;
    pLVar3 = (this->fields).avatarMaterials;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarFader::AvatarFader_Start(AvatarFader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Add_System__String__UnityEngine__Shader_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Dictionary_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                   );
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).normalShaders;
  if (pAVar1 != (AvatarFader_ShaderFaderInstruction__Array *)0x0) {
    pDVar2 = (Dictionary_2_System_String_UnityEngine_Shader_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>
                            );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object___ctor_3
              ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pAVar1->max_length,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Dictionary_int_
              );
    (this->fields).normalShadersDictionary = pDVar2;
    func_?(&(this->fields).normalShadersDictionary,pDVar2);
    pAVar1 = (this->fields).fadeShaders;
    if (pAVar1 != (AvatarFader_ShaderFaderInstruction__Array *)0x0) {
      pDVar2 = (Dictionary_2_System_String_UnityEngine_Shader_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>
                              );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object___ctor_3
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pAVar1->max_length,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Dictionary_int_
                );
      (this->fields).fadeShadersDictionary = pDVar2;
      func_?(&(this->fields).fadeShadersDictionary,pDVar2);
      pAVar1 = (this->fields).normalShaders;
      if (pAVar1 != (AvatarFader_ShaderFaderInstruction__Array *)0x0) {
        iVar3 = pAVar1->max_length;
        uVar4 = 0;
        if (0 < (int)iVar3) {
          iVar5 = 0;
          do {
            pAVar1 = (this->fields).normalShaders;
            if (pAVar1 == (AvatarFader_ShaderFaderInstruction__Array *)0x0) goto code_?;
            if (pAVar1->max_length <= uVar4) goto code_?;
            pDVar2 = (this->fields).normalShadersDictionary;
            if (pDVar2 == (Dictionary_2_System_String_UnityEngine_Shader_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar2,
                       *(Object **)((int)&pAVar1->vector[0].originShader + iVar5),
                       *(Object **)((int)&pAVar1->vector[0].replacingShader + iVar5),
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Add_System__String__UnityEngine__Shader_
                      );
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0xc;
          } while ((int)uVar4 < (int)iVar3);
        }
        pAVar1 = (this->fields).fadeShaders;
        if (pAVar1 != (AvatarFader_ShaderFaderInstruction__Array *)0x0) {
          iVar3 = pAVar1->max_length;
          uVar4 = 0;
          if (0 < (int)iVar3) {
            iVar5 = 0;
            do {
              pAVar1 = (this->fields).fadeShaders;
              if (pAVar1 == (AvatarFader_ShaderFaderInstruction__Array *)0x0) goto code_?;
              if (pAVar1->max_length <= uVar4) goto code_?;
              pDVar2 = (this->fields).fadeShadersDictionary;
              if (pDVar2 == (Dictionary_2_System_String_UnityEngine_Shader_ *)0x0)
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar2,
                         *(Object **)((int)&pAVar1->vector[0].originShader + iVar5),
                         *(Object **)((int)&pAVar1->vector[0].replacingShader + iVar5),
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Add_System__String__UnityEngine__Shader_
                        );
              uVar4 = uVar4 + 1;
              iVar5 = iVar5 + 0xc;
            } while ((int)uVar4 < (int)iVar3);
          }
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                     Component_GetComponentsInChildren
                               ((Component *)this_01,
                                UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                               );
            uStack_7 = 0;
            if (pOVar6 != (Object__Array *)0x0) {
              ppOVar8 = pOVar6->vector;
              while( true ) {
                if ((int)pOVar6->max_length <= (int)uStack_7) {
                  return;
                }
                if (pOVar6->max_length <= uStack_7) break;
                if ((Renderer *)*ppOVar8 == (Renderer *)0x0) goto code_?;
                pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                                   ((Renderer *)*ppOVar8,(MethodInfo *)0x0);
                ppMVar10 = pMVar9->vector;
                uVar4 = 0;
                if (pMVar9 == (Material__Array *)0x0) goto code_?;
                for (; (int)uVar4 < (int)pMVar9->max_length; uVar4 = uVar4 + 1) {
                  if (pMVar9->max_length <= uVar4) goto code_?;
                  this_00 = (this->fields).avatarMaterials;
                  if (this_00 == (List_1_UnityEngine_Material_ *)0x0) goto code_?;
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)this_00,(Object *)*ppMVar10,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                            );
                  ppMVar10 = ppMVar10 + 1;
                }
                uStack_7 = uStack_7 + 1;
                ppOVar8 = ppOVar8 + 1;
              }
code_?:
              func_?();
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* AvatarFader() */

void Assembly-CSharp.dll::AvatarFader::AvatarFader__ctor(AvatarFader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Material>);
    func_?(&StringLiteral__TintColor);
    func_?(&StringLiteral__Color);
    func_?(&StringLiteral__Transparency);
    cRam_? = '\x01';
  }
  (this->fields).transparencyProperty = StringLiteral__Transparency;
  func_?(&(this->fields).transparencyProperty,StringLiteral__Transparency);
  (this->fields).colorProperty = StringLiteral__Color;
  func_?(&(this->fields).colorProperty,StringLiteral__Color);
  (this->fields).tintProperty = StringLiteral__TintColor;
  func_?(&(this->fields).tintProperty,StringLiteral__TintColor);
  this_00 = (List_1_UnityEngine_Material_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Material>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
  (this->fields).avatarMaterials = this_00;
  func_?(&(this->fields).avatarMaterials,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

