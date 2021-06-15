
/* Void Initialize() */

void Assembly-CSharp.dll::AntiHack::TextureIntegrityChecker::TextureIntegrityChecker_Initialize
               (TextureIntegrityChecker *this,MethodInfo *method)

{
  this_00 = (this->fields).materialPlaneRenderer;
  if (this_00 != (MaterialPlaneRenderer *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    desc = (this_00->fields).renderTextureDesc;
    pRVar1 = (RenderTexture *)func_?(TypeInfo__UnityEngine__RenderTexture);
    UnityEngine.CoreModule.dll::UnityEngine::RenderTexture::RenderTexture__ctor_1
              (pRVar1,desc,(MethodInfo *)0x0);
    (this_00->fields).renderTexture = pRVar1;
    if (pRVar1 != (RenderTexture *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_wrapMode
                ((Texture *)pRVar1,TextureWrapMode__Enum_Clamp,(MethodInfo *)0x0);
      pRVar1 = (this_00->fields).renderTexture;
      if (pRVar1 != (RenderTexture *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                  ((Texture *)pRVar1,FilterMode__Enum_Point,(MethodInfo *)0x0);
        pRVar1 = (this_00->fields).renderTexture;
        if (pRVar1 != (RenderTexture *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                    ((Texture *)pRVar1,1,(MethodInfo *)0x0);
          MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes(this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean VerifyTextureIntegrity() */

bool Assembly-CSharp.dll::AntiHack::TextureIntegrityChecker::
     TextureIntegrityChecker_VerifyTextureIntegrity
               (TextureIntegrityChecker *this,MethodInfo *method)

{
  this = (TextureIntegrityChecker *)(this->fields).materialPlaneRenderer;
  if ((MaterialPlaneRenderer *)this == (MaterialPlaneRenderer *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_VoxelHit_ *)(((MaterialPlaneRenderer *)this)->fields).hashes;
  if (this_00 != (List_1_VoxelHit_ *)0x0) {
    pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__ToArray
                       (this_00,
                        MethodInfo__System__Collections__Generic__List<unsigned_char>__ToArray__);
    MaterialPlaneRenderer::MaterialPlaneRenderer_GenerateNewHashes
              ((MaterialPlaneRenderer *)this,(MethodInfo *)0x0);
    index = 0;
    if (pVVar3 != (VoxelHit__Array *)0x0) {
      do {
        if ((int)pVVar3->max_length <= (int)index) {
          return 1;
        }
        if (pVVar3->max_length <= index) goto code_?;
        uVar4 = *(uint8_t *)((int)&pVVar3->vector[0].point.x + index);
        this_01 = this[1].fields.materialPlaneRenderer;
        if (this_01 == (MaterialPlaneRenderer *)0x0) break;
        uVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
                List_1_System_Byte__1_get_Item
                          ((List_1_System_Byte__1 *)this_01,index,
                           MethodInfo__System__Collections__Generic__List<unsigned_char>__get_Item_int_
                          );
        if (uVar4 != uVar5) {
          if ((((uint)(TypeInfo__AntiHack__MaterialPlaneRenderer->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__AntiHack__MaterialPlaneRenderer->_1).cctor_started == 0)) {
            this = (TextureIntegrityChecker *)TypeInfo__AntiHack__MaterialPlaneRenderer;
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
              uVar6 = func_?(TypeInfo__System__Int32,&stack0xfffffff8);
              func_?(args,uVar6);
              func_?(1,uVar6);
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
                pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                                   (this_02,(MethodInfo *)0x0);
                func_?();
                pSStack8 = pSVar7;
                func_?();
                func_?();
                func_?();
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                pSVar7 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                          ((Object *)pSVar7,(MethodInfo *)0x0);
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
  uVar6 = func_?(0);
  func_?(uVar6);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}

