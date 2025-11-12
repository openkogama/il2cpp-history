
/* Void AssignNewNumber(Int32) */

void Assembly-CSharp.dll::MVCountingCubeDigits::MVCountingCubeDigits_AssignNewNumber
               (MVCountingCubeDigits *this,int32_t newValue,MethodInfo *method)

{
  aIStackX_10[0].m_value = newValue;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  if ((pSVar1 == (String *)0x0) ||
     (((pSVar1->fields)._stringLength < 2 &&
      (pSVar1 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral__0,pSVar1,(MethodInfo *)0x0), pSVar1 == (String *)0x0)))) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (0 < (pSVar1->fields)._stringLength) {
    uVar3 = (pSVar1->fields)._firstChar;
    if ((*(int *)(lRam_? + 0xe4) == 0) &&
       (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
      FUN_?();
    }
    s = mscorlib.dll::System::Char::Char_ToString_2(uVar3,(MethodInfo *)0x0);
    iVar4 = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
    if (1 < (pSVar1->fields)._stringLength) {
      uVar3 = *(uint16_t *)&(pSVar1->fields).field_0x6;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pSVar1 = mscorlib.dll::System::Char::Char_ToString_2(uVar3,(MethodInfo *)0x0);
      value = mscorlib.dll::System::Int32::Int32_Parse(pSVar1,(MethodInfo *)0x0);
      pMVar5 = (this->fields).FrontFirst;
      if (pMVar5 != (MVCountingCubeDigit *)0x0) {
        MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar5,iVar4,(MethodInfo *)0x0);
        pMVar5 = (this->fields).FrontSecond;
        if (pMVar5 != (MVCountingCubeDigit *)0x0) {
          MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar5,value,(MethodInfo *)0x0);
          pMVar5 = (this->fields).BackFirst;
          if (pMVar5 != (MVCountingCubeDigit *)0x0) {
            MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar5,iVar4,(MethodInfo *)0x0);
            pMVar5 = (this->fields).BackSecond;
            if (pMVar5 != (MVCountingCubeDigit *)0x0) {
              (pMVar5->fields)._number = value;
              pMVar6 = MVCountingCubeDigit::MVCountingCubeDigit_get_MeshRenderer
                                 (pMVar5,(MethodInfo *)0x0);
              if ((pMVar6 != (MeshRenderer *)0x0) &&
                 (pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                     ((Renderer *)pMVar6,(MethodInfo *)0x0),
                 pMVar7 != (Material *)0x0)) {
                VVar8 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                        Material_get_mainTextureOffset(pMVar7,(MethodInfo *)0x0);
                fVar9 = (float)((uint)((float)(pMVar5->fields)._number / _UNK_?) ^
                               _UNK_?);
                pMVar6 = MVCountingCubeDigit::MVCountingCubeDigit_get_MeshRenderer
                                   (pMVar5,(MethodInfo *)0x0);
                if ((pMVar6 != (MeshRenderer *)0x0) &&
                   (pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                             Renderer_get_material((Renderer *)pMVar6,(MethodInfo *)0x0),
                   pMVar7 != (Material *)0x0)) {
                  offset.y = fVar9;
                  offset.x = VVar8.x;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Material);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                          Material_GetFirstPropertyNameIdByAttribute
                                    (pMVar7,ShaderPropertyFlags__Enum_MainTexture,(MethodInfo *)0x0)
                  ;
                  if (iVar4 < 0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__UnityEngine__Material);
                    }
                    iVar4 = TypeInfo__UnityEngine__Material->static_fields->k_MainTexId;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffsetImpl
                            (pMVar7,iVar4,offset,(MethodInfo *)0x0);
                  return;
                }
              }
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException((MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Number(Int32) */

void Assembly-CSharp.dll::MVCountingCubeDigits::MVCountingCubeDigits_set_Number
               (MVCountingCubeDigits *this,int32_t value,MethodInfo *method)

{
  aIStackX_10[0].m_value = value;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  if ((pSVar1 == (String *)0x0) ||
     (((pSVar1->fields)._stringLength < 2 &&
      (pSVar1 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral__0,pSVar1,(MethodInfo *)0x0), pSVar1 == (String *)0x0)))) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (0 < (pSVar1->fields)._stringLength) {
    uVar3 = (pSVar1->fields)._firstChar;
    if ((*(int *)(lRam_? + 0xe4) == 0) &&
       (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
      FUN_?();
    }
    s = mscorlib.dll::System::Char::Char_ToString_2(uVar3,(MethodInfo *)0x0);
    iVar4 = mscorlib.dll::System::Int32::Int32_Parse(s,(MethodInfo *)0x0);
    if (1 < (pSVar1->fields)._stringLength) {
      uVar3 = *(uint16_t *)&(pSVar1->fields).field_0x6;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pSVar1 = mscorlib.dll::System::Char::Char_ToString_2(uVar3,(MethodInfo *)0x0);
      value_00 = mscorlib.dll::System::Int32::Int32_Parse(pSVar1,(MethodInfo *)0x0);
      pMVar5 = (this->fields).FrontFirst;
      if (pMVar5 != (MVCountingCubeDigit *)0x0) {
        MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar5,iVar4,(MethodInfo *)0x0);
        pMVar5 = (this->fields).FrontSecond;
        if (pMVar5 != (MVCountingCubeDigit *)0x0) {
          MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar5,value_00,(MethodInfo *)0x0);
          pMVar5 = (this->fields).BackFirst;
          if (pMVar5 != (MVCountingCubeDigit *)0x0) {
            MVCountingCubeDigit::MVCountingCubeDigit_set_Number(pMVar5,iVar4,(MethodInfo *)0x0);
            pMVar5 = (this->fields).BackSecond;
            if (pMVar5 != (MVCountingCubeDigit *)0x0) {
              (pMVar5->fields)._number = value_00;
              pMVar6 = MVCountingCubeDigit::MVCountingCubeDigit_get_MeshRenderer
                                 (pMVar5,(MethodInfo *)0x0);
              if ((pMVar6 != (MeshRenderer *)0x0) &&
                 (pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                     ((Renderer *)pMVar6,(MethodInfo *)0x0),
                 pMVar7 != (Material *)0x0)) {
                VVar8 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                        Material_get_mainTextureOffset(pMVar7,(MethodInfo *)0x0);
                fVar9 = (float)((uint)((float)(pMVar5->fields)._number / _UNK_?) ^
                               _UNK_?);
                pMVar6 = MVCountingCubeDigit::MVCountingCubeDigit_get_MeshRenderer
                                   (pMVar5,(MethodInfo *)0x0);
                if ((pMVar6 != (MeshRenderer *)0x0) &&
                   (pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                             Renderer_get_material((Renderer *)pMVar6,(MethodInfo *)0x0),
                   pMVar7 != (Material *)0x0)) {
                  offset.y = fVar9;
                  offset.x = VVar8.x;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Material);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                          Material_GetFirstPropertyNameIdByAttribute
                                    (pMVar7,ShaderPropertyFlags__Enum_MainTexture,(MethodInfo *)0x0)
                  ;
                  if (iVar4 < 0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
                      FUN_?(TypeInfo__UnityEngine__Material);
                    }
                    iVar4 = TypeInfo__UnityEngine__Material->static_fields->k_MainTexId;
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffsetImpl
                            (pMVar7,iVar4,offset,(MethodInfo *)0x0);
                  return;
                }
              }
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
      }
      goto code_?;
    }
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException((MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

