
/* Void AddFadeMaterial(Material) */

void Assembly-CSharp.dll::AvatarFader::AvatarFader_AddFadeMaterial
               (AvatarFader *this,Material *addRenderer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarMaterials;
  if (this_00 != (List_1_UnityEngine_Material_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)addRenderer,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Shader GetShader(Shader, Boolean) */

Shader * Assembly-CSharp.dll::AvatarFader::AvatarFader_GetShader
                   (AvatarFader *this,Shader *currShader,bool fading,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSStack_1 = (Sprite *)0x0;
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
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityEngine::
              Sprite]::Dictionary_2_System_String_UnityEngine_Sprite__TryGetValue
                        ((Dictionary_2_System_String_UnityEngine_Sprite_ *)this_00,key,&pSStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__TryGetValue_System__String__UnityEngine__Shader__
                        );
      if (bVar2 == 0) {
        if (pSStack_1 != (Sprite *)0x0) {
          currShader = (Shader *)pSStack_1;
        }
        return currShader;
      }
      return (Shader *)pSStack_1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  pSVar4 = (Shader *)(*pcVar3)();
  return pSVar4;
}


/* Void RemoveFadeMaterial(Material) */

void Assembly-CSharp.dll::AvatarFader::AvatarFader_RemoveFadeMaterial
               (AvatarFader *this,Material *removeMaterial,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).avatarMaterials;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    item._4_4_ = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Remove_UnityEngine__Material_
    ;
    item.rgba = (int32_t)removeMaterial;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__Remove(this_00,item,unaff_EBP);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetTransparency(Single) */

void Assembly-CSharp.dll::AvatarFader::AvatarFader_SetTransparency
               (AvatarFader *this,float fadeFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((fadeFactor == _UNK_?) && ((this->fields).fading == 0)) {
    return;
  }
  bVar1 = fadeFactor == _UNK_?;
  (this->fields).fading = fadeFactor < _UNK_?;
  if (bVar1) {
    (this->fields).changedShaders = 0;
    (this->fields).prevFading = 0;
  }
  index = 0;
  pLVar2 = (this->fields).avatarMaterials;
  while (pLVar2 != (List_1_UnityEngine_Material_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                       );
    if ((int)pOVar3 <= index) {
      if ((this->fields).changedShaders == 0) {
        return;
      }
      (this->fields).prevFading = 1;
      return;
    }
    pLVar2 = (this->fields).avatarMaterials;
    if (pLVar2 == (List_1_UnityEngine_Material_ *)0x0) break;
    x = (Object_1 *)
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
        IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                  );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((this->fields).prevFading == 0) {
        pLVar2 = (this->fields).avatarMaterials;
        if ((pLVar2 == (List_1_UnityEngine_Material_ *)0x0) ||
           (pMVar5 = (Material *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index
                                ,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                               ), pMVar5 == (Material *)0x0)) break;
        pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                           (pMVar5,(MethodInfo *)0x0);
        pSVar6 = AvatarFader_GetShader(this,pSVar6,(this->fields).fading,(MethodInfo *)0x0);
        pLVar2 = (this->fields).avatarMaterials;
        if ((pLVar2 == (List_1_UnityEngine_Material_ *)0x0) ||
           (pMVar5 = (Material *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index
                                ,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                               ), pMVar5 == (Material *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                  (pMVar5,pSVar6,(MethodInfo *)0x0);
      }
      pLVar2 = (this->fields).avatarMaterials;
      if ((pLVar2 == (List_1_UnityEngine_Material_ *)0x0) ||
         (pMVar5 = (Material *)
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                             ), pMVar5 == (Material *)0x0)) break;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1
                        (pMVar5,(this->fields).colorProperty,(MethodInfo *)0x0);
      pLVar2 = (this->fields).avatarMaterials;
      if (bVar4 == 0) {
        if ((pLVar2 == (List_1_UnityEngine_Material_ *)0x0) ||
           (pMVar5 = (Material *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index
                                ,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                               ), pMVar5 == (Material *)0x0)) break;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty_1
                          (pMVar5,(this->fields).tintProperty,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pLVar2 = (this->fields).avatarMaterials;
          if ((pLVar2 == (List_1_UnityEngine_Material_ *)0x0) ||
             (pMVar5 = (Material *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                  index,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                                 ), pMVar5 == (Material *)0x0)) break;
          pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                             ((Color *)&stack0xffffffb8,pMVar5,(this->fields).tintProperty,
                              (MethodInfo *)0x0);
          fVar8 = pCVar7->r;
          fVar9 = pCVar7->g;
          fVar10 = pCVar7->b;
          pLVar2 = (this->fields).avatarMaterials;
          if ((pLVar2 == (List_1_UnityEngine_Material_ *)0x0) ||
             (pMVar5 = (Material *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                  index,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                                 ), pMVar5 == (Material *)0x0)) break;
          value_00.y = fVar9;
          value_00.x = fVar8;
          value_00.z = fVar10;
          value_00.w = fadeFactor;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar5,(this->fields).tintProperty,value_00,(MethodInfo *)0x0);
        }
      }
      else {
        if ((pLVar2 == (List_1_UnityEngine_Material_ *)0x0) ||
           (pMVar5 = (Material *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index
                                ,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                               ), pMVar5 == (Material *)0x0)) break;
        pCVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                           ((Color *)&stack0xffffffa8,pMVar5,(MethodInfo *)0x0);
        fVar8 = pCVar7->g;
        fVar9 = pCVar7->b;
        pLVar2 = (this->fields).avatarMaterials;
        if ((pLVar2 == (List_1_UnityEngine_Material_ *)0x0) ||
           (pMVar11 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_,
           pMVar5 = (Material *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                              ), pMVar5 == (Material *)0x0)) break;
        value.g = fVar8;
        value.r = (float)pMVar11;
        value.b = fVar9;
        value.a = fadeFactor;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar5,value,(MethodInfo *)0x0);
      }
    }
    else {
      this_00 = (List_1_MVPlayer_ *)(this->fields).avatarMaterials;
      if (this_00 == (List_1_MVPlayer_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this_00,index,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                );
      index = index + -1;
    }
    index = index + 1;
    pLVar2 = (this->fields).avatarMaterials;
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarFader::AvatarFader_Start(AvatarFader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).normalShaders;
  if (pAVar1 != (AvatarFader_ShaderFaderInstruction__Array *)0x0) {
    pDVar2 = (Dictionary_2_System_String_UnityEngine_Shader_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>
                            );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object___ctor_3
              ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar2,pAVar1->max_length,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Dictionary_int_
              );
    pAVar1 = (this->fields).fadeShaders;
    (this->fields).normalShadersDictionary = pDVar2;
    if (pAVar1 != (AvatarFader_ShaderFaderInstruction__Array *)0x0) {
      pDVar2 = (Dictionary_2_System_String_UnityEngine_Shader_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>
                              );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]
      ::Dictionary_2_WinningConditionType_System_Object___ctor_3
                ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar2,pAVar1->max_length,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Dictionary_int_
                );
      pAVar1 = (this->fields).normalShaders;
      (this->fields).fadeShadersDictionary = pDVar2;
      if (pAVar1 != (AvatarFader_ShaderFaderInstruction__Array *)0x0) {
        iVar3 = pAVar1->max_length;
        uVar4 = 0;
        if (0 < (int)iVar3) {
          iVar5 = 0;
          do {
            pAVar1 = (this->fields).normalShaders;
            if (pAVar1 == (AvatarFader_ShaderFaderInstruction__Array *)0x0) goto code_?;
            if (pAVar1->max_length <= uVar4) goto code_?;
            if ((pAVar1 == (AvatarFader_ShaderFaderInstruction__Array *)0x0) ||
               (pDVar2 = (this->fields).normalShadersDictionary,
               pDVar2 == (Dictionary_2_System_String_UnityEngine_Shader_ *)0x0))
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)pDVar2,*(String **)((int)&pAVar1->vector[0].originShader + iVar5),
                       *(CrossPlatformInputManager_VirtualButton **)
                        ((int)&pAVar1->vector[0].replacingShader + iVar5),
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
              if ((pAVar1 == (AvatarFader_ShaderFaderInstruction__Array *)0x0) ||
                 (pDVar2 = (this->fields).fadeShadersDictionary,
                 pDVar2 == (Dictionary_2_System_String_UnityEngine_Shader_ *)0x0))
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              String,UnityStandardAssets::CrossPlatformInput::
              CrossPlatformInputManager+VirtualButton]::
              Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                        ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                          *)pDVar2,*(String **)((int)&pAVar1->vector[0].originShader + iVar5),
                         *(CrossPlatformInputManager_VirtualButton **)
                          ((int)&pAVar1->vector[0].replacingShader + iVar5),
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityEngine::Shader>__Add_System__String__UnityEngine__Shader_
                        );
              uVar4 = uVar4 + 1;
              iVar5 = iVar5 + 0xc;
            } while ((int)uVar4 < (int)iVar3);
          }
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            pUVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_29
                               ((GameObject *)this_01,
                                UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                               );
            uStack_7 = 0;
            if (pUVar6 != (UseInteratorVisualization__Array *)0x0) {
              ppUVar8 = pUVar6->vector;
              while( true ) {
                if ((int)pUVar6->max_length <= (int)uStack_7) {
                  return;
                }
                if (pUVar6->max_length <= uStack_7) break;
                if (*ppUVar8 == (UseInteratorVisualization *)0x0) goto code_?;
                pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                                   ((Renderer *)*ppUVar8,(MethodInfo *)0x0);
                iVar5 = 0;
                while( true ) {
                  if (pMVar9 == (Material__Array *)0x0) goto code_?;
                  if ((int)pMVar9->max_length <= iVar5) break;
                  this_00 = (this->fields).avatarMaterials;
                  item = func_?(iVar5);
                  if (this_00 == (List_1_UnityEngine_Material_ *)0x0) goto code_?;
                  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                  List_1_UIPushOption__Add
                            ((List_1_UIPushOption_ *)this_00,item,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                            );
                  iVar5 = iVar5 + 1;
                }
                uStack_7 = uStack_7 + 1;
                ppUVar8 = ppUVar8 + 1;
              }
code_?:
              uVar10 = func_?(0,0);
              func_?(uVar10);
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* AvatarFader() */

void Assembly-CSharp.dll::AvatarFader::AvatarFader__ctor(AvatarFader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).colorProperty = StringLiteral__Color;
  (this->fields).tintProperty = StringLiteral__TintColor;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Material>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
  (this->fields).avatarMaterials = (List_1_UnityEngine_Material_ *)this_00;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

