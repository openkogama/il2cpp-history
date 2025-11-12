
/* Void Awake() */

void Assembly-CSharp.dll::Fader::Fader_Awake(Fader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pRVar1 = (Renderer *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1((Component *)this,UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__);
  bVar2 = iRam_? != 0;
  (this->fields)._renderer = pRVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._renderer >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pRVar1 = (this->fields)._renderer;
  if ((pRVar1 != (Renderer *)0x0) && (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material(pRVar1,(MethodInfo *)0x0), this_00 != (Material *)0x0)) {
    pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader(this_00,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).normalShader = pSVar7;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).normalShader >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Fade(Single) */

void Assembly-CSharp.dll::Fader::Fader_Fade(Fader *this,float fadeFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Faded_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__factor_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((bool)(this->fields).faded != fadeFactor < 1.0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = StringLiteral_False;
    if ((this->fields).faded != 0) {
      pSVar1 = StringLiteral_True;
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    str3 = mscorlib.dll::System::Number::Number_FormatSingle(fadeFactor,(String *)0x0,info,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_6(StringLiteral_Faded_,pSVar1,StringLiteral__factor_,str3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  }
  pRVar2 = (this->fields)._renderer;
  if (pRVar2 == (Renderer *)0x0) goto code_?;
  pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material(pRVar2,(MethodInfo *)0x0);
  if (fadeFactor < 1.0) {
    if (pMVar3 == (Material *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader(pMVar3,(this->fields).fadeShader,(MethodInfo *)0x0);
    pRVar2 = (this->fields)._renderer;
    if ((pRVar2 == (Renderer *)0x0) || (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material(pRVar2,(MethodInfo *)0x0), pMVar3 == (Material *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Material);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFirstPropertyNameIdByAttribute(pMVar3,ShaderPropertyFlags__Enum_MainColor,(MethodInfo *)0x0);
    if (iVar4 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__Material);
      }
      iVar4 = TypeInfo__UnityEngine__Material->static_fields->k_ColorId;
    }
    pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1(aCStack_6,pMVar3,iVar4,(MethodInfo *)0x0);
    fVar7 = pCVar5->r;
    fVar8 = pCVar5->g;
    fVar9 = pCVar5->b;
    pRVar2 = (this->fields)._renderer;
    if (pRVar2 == (Renderer *)0x0) goto code_?;
    pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material(pRVar2,(MethodInfo *)0x0);
    aCStack_6[0].a = fadeFactor;
  }
  else {
    if (pMVar3 == (Material *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader(pMVar3,(this->fields).normalShader,(MethodInfo *)0x0);
    pRVar2 = (this->fields)._renderer;
    if ((pRVar2 == (Renderer *)0x0) || (pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material(pRVar2,(MethodInfo *)0x0), pMVar3 == (Material *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Material);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetFirstPropertyNameIdByAttribute(pMVar3,ShaderPropertyFlags__Enum_MainColor,(MethodInfo *)0x0);
    if (iVar4 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__Material);
      }
      iVar4 = TypeInfo__UnityEngine__Material->static_fields->k_ColorId;
    }
    pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1(aCStack_6,pMVar3,iVar4,(MethodInfo *)0x0);
    fVar7 = pCVar5->r;
    fVar8 = pCVar5->g;
    fVar9 = pCVar5->b;
    pRVar2 = (this->fields)._renderer;
    if (pRVar2 == (Renderer *)0x0) goto code_?;
    pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material(pRVar2,(MethodInfo *)0x0);
    aCStack_6[0].a = 1.0;
  }
  aCStack_6[0].b = fVar9;
  aCStack_6[0].g = fVar8;
  aCStack_6[0].r = fVar7;
  if (pMVar3 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color(pMVar3,aCStack_6,(MethodInfo *)0x0);
    (this->fields).faded = fadeFactor < 1.0;
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

