
/* Vector2 GetAtlasPoint(Int32) */

Vector2 Assembly-CSharp.dll::TextureAtlas::TextureAtlas_GetAtlasPoint
                  (int32_t MaterialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TextureAtlas);
    cRam_? = '\x01';
  }
  if ((TypeInfo__TextureAtlas->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__TextureAtlas);
  }
  if (TypeInfo__TextureAtlas->static_fields->Initialized == 0) {
    if ((TypeInfo__TextureAtlas->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TextureAtlas);
    }
    TextureAtlas_InitializeIndexMap((MethodInfo *)0x0);
    TypeInfo__TextureAtlas->static_fields->Initialized = 1;
  }
  if ((TypeInfo__TextureAtlas->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__TextureAtlas);
  }
  pVVar1 = TypeInfo__TextureAtlas->static_fields->IndexMap;
  if (pVVar1 == (Vector2__Array *)0x0) {
    func_?();
  }
  else if ((uint)MaterialID < pVVar1->max_length) {
    VVar2.y = pVVar1->vector[MaterialID].y;
    VVar2.x = pVVar1->vector[MaterialID].x;
    return VVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  VVar2 = (Vector2)(*pcVar3)();
  return VVar2;
}


/* Void InitializeIndexMap() */

void Assembly-CSharp.dll::TextureAtlas::TextureAtlas_InitializeIndexMap(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&int_MethodInfo__System__Array__IndexOf<int>_System__Int32_____int_);
    func_?(&TypeInfo__TextureAtlas);
    cRam_? = '\x01';
  }
  iStack_1 = 0x10;
  uStack_2 = 0;
  while( true ) {
    if ((TypeInfo__TextureAtlas->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TextureAtlas);
    }
    iVar3 = mscorlib.dll::System::Array::Array_IndexOf_3
                      (TypeInfo__TextureAtlas->static_fields->GlowingMaterials,uStack_2,
                       int_MethodInfo__System__Array__IndexOf<int>_System__Int32_____int_);
    if (-1 < iVar3) break;
    if ((TypeInfo__TextureAtlas->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TextureAtlas);
    }
    pIVar4 = TypeInfo__TextureAtlas->static_fields->GlowingMaterials;
    if (pIVar4 == (Int32__Array *)0x0) goto code_?;
    if (pIVar4->max_length == 0) goto code_?;
    pTVar5 = TypeInfo__TextureAtlas;
    uVar6 = uStack_2;
    if (pIVar4->vector[0] <= (int)uStack_2) {
      if ((TypeInfo__TextureAtlas->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TextureAtlas);
      }
      pIVar4 = TypeInfo__TextureAtlas->static_fields->GlowingMaterials;
      if (pIVar4 == (Int32__Array *)0x0) goto code_?;
      if (pIVar4->max_length <= pIVar4->max_length - 1) goto code_?;
      if (pIVar4->vector[pIVar4->max_length - 1] < (int)uStack_2) {
        if ((TypeInfo__TextureAtlas->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__TextureAtlas);
        }
        pIVar4 = TypeInfo__TextureAtlas->static_fields->GlowingMaterials;
        if (pIVar4 == (Int32__Array *)0x0) goto code_?;
        pTVar5 = TypeInfo__TextureAtlas;
        uVar6 = uStack_2 - pIVar4->max_length;
      }
      else {
        uVar6 = 0;
        iStack_7 = 0;
        iVar8 = 0x10;
        pTVar5 = TypeInfo__TextureAtlas;
        while( true ) {
          if ((pTVar5->_1).cctor_finished_or_no_cctor == 0) {
            func_?(pTVar5);
            pTVar5 = TypeInfo__TextureAtlas;
          }
          pIVar4 = pTVar5->static_fields->GlowingMaterials;
          if (pIVar4 == (Int32__Array *)0x0) goto code_?;
          if ((int)(pIVar4->max_length - 1) <= (int)uVar6) break;
          if ((pTVar5->_1).cctor_finished_or_no_cctor == 0) {
            func_?(pTVar5);
            pTVar5 = TypeInfo__TextureAtlas;
          }
          pIVar4 = pTVar5->static_fields->GlowingMaterials;
          if (pIVar4 == (Int32__Array *)0x0) goto code_?;
          if (pIVar4->max_length <= uVar6) goto code_?;
          if ((int)uStack_2 < *(int *)((int)pIVar4->vector + iVar8 + -0x10)) break;
          iStack_7 = iStack_7 + 1;
          uVar6 = uVar6 + 1;
          iVar8 = iVar8 + 4;
        }
        uVar6 = uStack_2 - iStack_7;
      }
    }
code_?:
    if ((pTVar5->_1).cctor_finished_or_no_cctor == 0) {
      func_?(pTVar5);
      pTVar5 = TypeInfo__TextureAtlas;
    }
    pVVar9 = pTVar5->static_fields->IndexMap;
    fVar10 = (float)(0xd - (((int)uVar6 / 0xe) * 0xe) / 0xe) * _UNK_? + _UNK_?;
    if (pVVar9 == (Vector2__Array *)0x0) goto code_?;
    if (pVVar9->max_length <= uStack_2) goto code_?;
    uStack_2 = uStack_2 + 1;
    *(float *)((int)&((Vector2__Array *)(pVVar9->vector + -2))->klass + iStack_1) =
         (float)((int)uVar6 % 0xe) * _UNK_? + _UNK_?;
    *(float *)((int)pVVar9->vector + iStack_1 + -0xc) = fVar10;
    iStack_1 = iStack_1 + 8;
    if (0x237 < iStack_1) {
      return;
    }
  }
  if ((TypeInfo__TextureAtlas->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__TextureAtlas);
  }
  pIVar4 = TypeInfo__TextureAtlas->static_fields->GlowingMaterials;
  if (pIVar4 != (Int32__Array *)0x0) {
    pTVar5 = TypeInfo__TextureAtlas;
    uVar6 = (iVar3 - pIVar4->max_length) + 0x45;
    goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* TextureAtlas() */

void Assembly-CSharp.dll::TextureAtlas::TextureAtlas__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__TextureAtlas);
    func_?(&::_754BBD310DEC84C967A58DC1431E57A6CBF5D9E514CAC20410E78B8ECCCE08A0_Field);
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  array = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,__754BBD310DEC84C967A58DC1431E57A6CBF5D9E514CAC20410E78B8ECCCE08A0_Field
             ,(MethodInfo *)0x0);
  TypeInfo__TextureAtlas->static_fields->GlowingMaterials = array;
  func_?(TypeInfo__TextureAtlas->static_fields,array);
  pVVar1 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,0xc4);
  TypeInfo__TextureAtlas->static_fields->IndexMap = pVVar1;
  func_?(&TypeInfo__TextureAtlas->static_fields->IndexMap,pVVar1);
  TypeInfo__TextureAtlas->static_fields->Initialized = 0;
  return;
}

