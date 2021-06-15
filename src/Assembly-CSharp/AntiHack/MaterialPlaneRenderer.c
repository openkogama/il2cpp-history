
/* Byte CalculateHash(RenderTexture) */

uint8_t Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_CalculateHash
                  (MaterialPlaneRenderer *this,RenderTexture *renderTexture,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (renderTexture != (RenderTexture *)0x0) {
    iVar1 = (*(code *)(renderTexture->klass->vtable).get_width.method)
                      (renderTexture,(renderTexture->klass->vtable).set_width.methodPtr);
    height = (*(code *)(renderTexture->klass->vtable).get_height.method)
                       (renderTexture,(renderTexture->klass->vtable).set_height.methodPtr);
    this_00 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
    UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_1
              (this_00,iVar1,height,TextureFormat__Enum_ARGB32,0,(MethodInfo *)0x0);
    iVar2 = (*(code *)(renderTexture->klass->vtable).get_width.method)
                      (renderTexture,(renderTexture->klass->vtable).set_width.methodPtr);
    iVar3 = (*(code *)(renderTexture->klass->vtable).get_height.method)
                      (renderTexture,(renderTexture->klass->vtable).set_height.methodPtr);
    fStack_4 = 0.0;
    fStack_5 = (float)iVar3;
    uStack_6 = 0;
    fStack_7 = (float)iVar2;
    func_?(&fStack_7,0,0);
    if (this_00 != (Texture2D *)0x0) {
      source.m_YMin = fStack_5;
      source.m_XMin = fStack_7;
      source.m_Width = (float)uStack_6;
      source.m_Height = fStack_4;
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_ReadPixels_1
                (this_00,source,0,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_Apply_1
                (this_00,(MethodInfo *)0x0);
      uVar8 = 0;
      pCVar9 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels32_1
                         (this_00,(MethodInfo *)0x0);
      uVar10 = 0;
      if (pCVar9 != (Color32__Array *)0x0) {
        pCVar11 = pCVar9->vector;
        while( true ) {
          if ((int)pCVar9->max_length <= (int)uVar10) {
            return uVar8;
          }
          if (pCVar9->max_length <= uVar10) break;
          iVar1 = pCVar11->rgba;
          uVar10 = uVar10 + 1;
          uVar8 = uVar8 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 8) + (char)iVar1;
          pCVar11 = (Color32 *)&pCVar11->r;
        }
        goto code_?;
      }
    }
  }
  func_?(0);
code_?:
  uVar12 = func_?(0,0);
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  uVar8 = (*pcVar13)();
  return uVar8;
}


/* Byte CalculateHash(Texture2D) */

uint8_t Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_CalculateHash_1
                  (MaterialPlaneRenderer *this,Texture2D *texture,MethodInfo *method)

{
  uStack_1 = 0;
  if (texture != (Texture2D *)0x0) {
    pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D_GetPixels32_1
                       (texture,(MethodInfo *)0x0);
    uVar3 = 0;
    if (pCVar2 != (Color32__Array *)0x0) {
      pCVar4 = pCVar2->vector;
      while( true ) {
        if ((int)pCVar2->max_length <= (int)uVar3) {
          return uStack_1;
        }
        if (pCVar2->max_length <= uVar3) break;
        iVar5 = pCVar4->rgba;
        uVar3 = uVar3 + 1;
        uStack_1 = uStack_1 + (char)((uint)iVar5 >> 0x10) + (char)((uint)iVar5 >> 8) + (char)iVar5;
        pCVar4 = (Color32 *)&pCVar4->r;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  uVar6 = func_?(0,0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  uVar8 = (*pcVar7)();
  return uVar8;
}


/* Void GenerateNewHashes() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).hashes;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,MethodInfo__System__Collections__Generic__List<unsigned_char>__Clear__);
    index = 0;
    pLVar1 = (this->fields).textures;
    while (pLVar1 != (List_1_UnityEngine_Texture2D_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Count__
                         );
      if ((int)pOVar2 <= index) {
        return;
      }
      pLVar1 = (this->fields).textures;
      if (pLVar1 == (List_1_UnityEngine_Texture2D_ *)0x0) break;
      value = (Texture *)
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                        );
      this_01 = (this->fields).material;
      if (this_01 == (Material *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_mainTexture
                (this_01,value,(MethodInfo *)0x0);
      this_02 = (this->fields).cam;
      if (this_02 == (Camera *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_Render(this_02,(MethodInfo *)0x0);
      index = index + 1;
      pLVar1 = (this->fields).textures;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_Initialize
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).renderTextureDesc._width_k__BackingField;
  uVar2 = (this->fields).renderTextureDesc._height_k__BackingField;
  uVar3 = (this->fields).renderTextureDesc._msaaSamples_k__BackingField;
  desc._msaaSamples_k__BackingField = uVar3;
  desc._height_k__BackingField = uVar2;
  desc._width_k__BackingField = uVar1;
  iVar4 = (this->fields).renderTextureDesc._volumeDepth_k__BackingField;
  iVar5 = (this->fields).renderTextureDesc._memoryless_k__BackingField;
  iVar6 = (this->fields).renderTextureDesc._colorFormat_k__BackingField;
  iVar7 = (this->fields).renderTextureDesc._depthBufferBits;
  iVar8 = (this->fields).renderTextureDesc._dimension_k__BackingField;
  iVar9 = (this->fields).renderTextureDesc._shadowSamplingMode_k__BackingField;
  uVar10._0_4_ = (this->fields).renderTextureDesc._vrUsage_k__BackingField;
  uVar10._4_4_ = (this->fields).renderTextureDesc._flags;
  pRVar11 = (RenderTexture *)func_?(TypeInfo__UnityEngine__RenderTexture);
  desc._volumeDepth_k__BackingField = iVar4;
  desc._colorFormat_k__BackingField = iVar6;
  desc._depthBufferBits = iVar7;
  desc._dimension_k__BackingField = iVar8;
  desc._shadowSamplingMode_k__BackingField = iVar9;
  desc._vrUsage_k__BackingField = (int)uVar10;
  desc._flags = (int)((ulonglong)uVar10 >> 0x20);
  desc._memoryless_k__BackingField = iVar5;
  UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_1
            (pRVar11,desc,(MethodInfo *)0x0);
  (this->fields).renderTexture = pRVar11;
  if (pRVar11 != (RenderTexture *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
              ((Texture *)pRVar11,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
    pRVar11 = (this->fields).renderTexture;
    if (pRVar11 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                ((Texture *)pRVar11,FilterMode__Enum_Point,(MethodInfo *)0x0);
      pRVar11 = (this->fields).renderTexture;
      if (pRVar11 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                  ((Texture *)pRVar11,1,(MethodInfo *)0x0);
        MaterialPlaneRenderer_GenerateNewHashes(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnPostRender_GenerateNewHashes() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::
     MaterialPlaneRenderer_OnPostRender_GenerateNewHashes
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).material;
  if (this_00 != (Material *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass
                      (this_00,0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_MaterialPlaneRenderer_failed_to_,(MethodInfo *)0x0);
      return;
    }
    mesh = (this->fields).plane;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       ((Vector3 *)(auStack_3 + 4),(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)auStack_3,(MethodInfo *)0x0);
    auStack_3._0_4_ = pQVar6->x;
    auStack_3._4_4_ = pQVar6->y;
    fStack_7 = pQVar6->z;
    fStack_8 = pQVar6->w;
    if ((((uint)(TypeInfo__UnityEngine__Graphics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Graphics->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Graphics);
    }
    position.z = fVar5;
    position.x = (float)(undefined4)uStack_4;
    position.y = (float)uStack_4._4_4_;
    rotation.y = (float)auStack_3._4_4_;
    rotation.x = (float)auStack_3._0_4_;
    rotation.z = fStack_7;
    rotation.w = fStack_8;
    UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
              (mesh,position,rotation,(MethodInfo *)0x0);
    this_01 = (this->fields).hashes;
    item = MaterialPlaneRenderer_CalculateHash(this,(this->fields).renderTexture,(MethodInfo *)0x0);
    if (this_01 != (List_1_System_Byte__1 *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte__1_Add
                (this_01,item,
                 MethodInfo__System__Collections__Generic__List<unsigned_char>__Add_unsigned_char_);
      return;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer_OnValidate
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cam;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                       );
    (this->fields).cam = (Camera *)pMVar3;
  }
  pCVar1 = (this->fields).cam;
  if (pCVar1 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pCVar1,0,(MethodInfo *)0x0);
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar4,*pVVar5,(MethodInfo *)0x0);
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                         ((Quaternion *)&stack0xffffffec,90.0,0.0,0.0,(MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar4,*pQVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean VerifyTextureIntegrity() */

bool Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::
     MaterialPlaneRenderer_VerifyTextureIntegrity(MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_VoxelHit_ *)(this->fields).hashes;
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    MaterialPlaneRenderer_GenerateNewHashes(this,(MethodInfo *)0x0);
    index = 0;
    if (pVVar1 != (VoxelHit__Array *)0x0) {
      do {
        if ((int)pVVar1->max_length <= (int)index) {
          return 1;
        }
        if (pVVar1->max_length <= index) goto code_?;
        uVar2 = *(uint8_t *)((int)&pVVar1->vector[0].point.x + index);
        this_01 = (this->fields).hashes;
        if (this_01 == (List_1_System_Byte__1 *)0x0) break;
        uVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                List_1_System_Byte__1_get_Item
                          (this_01,index,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        if (uVar2 != uVar3) {
          if ((((uint)(TypeInfo__AntiHack__MaterialPlaneRenderer->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__AntiHack__MaterialPlaneRenderer->_1).cctor_started == 0)) {
            this = (MaterialPlaneRenderer *)TypeInfo__AntiHack__MaterialPlaneRenderer;
            func_?();
          }
          if (TypeInfo__AntiHack__MaterialPlaneRenderer->static_fields->errorReportSent == 0) {
            if ((((uint)(TypeInfo__AntiHack__MaterialPlaneRenderer->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__AntiHack__MaterialPlaneRenderer->_1).cctor_started == 0)) {
              func_?();
            }
            TypeInfo__AntiHack__MaterialPlaneRenderer->static_fields->errorReportSent = 1;
            if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
              func_?();
            }
            StatHatWrapper::StatHatWrapper_Count
                      (StringLiteral_TextureIntegrityBreached,1,(MethodInfo *)0x0);
            args = (Object__Array *)func_?();
            if (args != (Object__Array *)0x0) {
              func_?(args);
              func_?(0);
              uVar4 = func_?(TypeInfo__System__Int32,&stack0xfffffff8);
              func_?(args,uVar4);
              func_?(1,uVar4);
              func_?(args,StringLiteral_____);
              func_?(2,StringLiteral_____);
              if ((pLRam0000001d != (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) &&
                 (this_02 = (Object_1 *)
                            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      (pLRam0000001d,index,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__get_Item_int_
                                      ), this_02 != (Object_1 *)0x0)) {
                pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                                   (this_02,(MethodInfo *)0x0);
                func_?();
                pSStack6 = pSVar5;
                func_?();
                func_?();
                func_?();
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                pSVar5 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                          ((Object *)pSVar5,(MethodInfo *)0x0);
                CheatHandling::CheatHandling_TextureHackDetected((MethodInfo *)0x0);
                return 0;
              }
            }
            break;
          }
        }
        index = index + 1;
      } while( true );
    }
  }
  func_?();
code_?:
  uVar4 = func_?(0);
  func_?(uVar4);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* MaterialPlaneRenderer() */

void Assembly-CSharp.dll::AntiHack::MaterialPlaneRenderer::MaterialPlaneRenderer__ctor
               (MaterialPlaneRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffd0,0,0x2c);
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Texture2D>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::Texture2D>__List__)
  ;
  (this->fields).textures = (List_1_UnityEngine_Texture2D_ *)this_00;
  this_01 = (List_1_System_Byte__1 *)
            func_?(TypeInfo__System__Collections__Generic__List<unsigned_char>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::List_1_System_Byte__1__ctor_1
            (this_01,1,MethodInfo__System__Collections__Generic__List<unsigned_char>__List_int_);
  (this->fields).hashes = this_01;
  func_?(&stack0xffffffd0,0,0x2c);
  AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
            ((AccessoryPreviewPopup *)&stack0xffffffd0,(MVBody *)0x2,(MethodInfo *)0x0);
  func_?();
  func_?();
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[ColorTween]::
  TweenRunner_1_ColorTween__Init
            ((TweenRunner_1_ColorTween_ *)&stack0xffffffd0,(MonoBehaviour *)0x1,(MethodInfo *)0x0);
  func_?(&stack0xffffffd0,0,0);
  MaterialDescription::MaterialDescription_set_SpecialProperties
            ((MaterialDescription *)&stack0xffffffd0,(BitArray *)0x7,(MethodInfo *)0x0);
  func_?(&stack0xffffffd0,0,0);
  func_?();
  func_?();
  func_?();
  MVar1._._._.m_CachedPtr = (Behaviour__Fields)(Component_1__Fields)0x0;
  this_02 = (AccessoryPreviewPopup__Class *)&stack0xffffffd0;
  pMVar2 = (MonitorData *)0x1;
  LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
            ((LockCursorManager3DMode *)this_02,(Action_1_Boolean_ *)0x1,(MethodInfo *)0x0);
  (this->fields).renderTextureDesc._width_k__BackingField = (int32_t)this_02;
  (this->fields).renderTextureDesc._height_k__BackingField = (int32_t)pMVar2;
  (this->fields).renderTextureDesc._msaaSamples_k__BackingField = (int32_t)MVar1._._._.m_CachedPtr;
  (this->fields).renderTextureDesc._volumeDepth_k__BackingField = (int32_t)&stack0xffffffd0;
  (this->fields).renderTextureDesc._colorFormat_k__BackingField = 0;
  (this->fields).renderTextureDesc._depthBufferBits = 0;
  (this->fields).renderTextureDesc._dimension_k__BackingField = (int32_t)&stack0xffffffd0;
  (this->fields).renderTextureDesc._shadowSamplingMode_k__BackingField = 0;
  (this->fields).renderTextureDesc._vrUsage_k__BackingField =
       (int)(ZEXT48(&stack0xffffffd0) << 0x20);
  (this->fields).renderTextureDesc._flags = (int)((ZEXT48(&stack0xffffffd0) << 0x20) >> 0x20);
  (this->fields).renderTextureDesc._memoryless_k__BackingField = 0;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

