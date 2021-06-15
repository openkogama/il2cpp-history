
/* Vector2 GetAtlasPoint(Int32) */

Vector2 Assembly-CSharp.dll::TextureAtlas::TextureAtlas_GetAtlasPoint
                  (int32_t MaterialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
    func_?(TypeInfo__TextureAtlas);
  }
  if (TypeInfo__TextureAtlas->static_fields->Initialized == 0) {
    if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
      func_?(TypeInfo__TextureAtlas);
    }
    TextureAtlas_InitializeIndexMap((MethodInfo *)0x0);
    TypeInfo__TextureAtlas->static_fields->Initialized = 1;
  }
  if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
    func_?(TypeInfo__TextureAtlas);
  }
  pVVar1 = TypeInfo__TextureAtlas->static_fields->IndexMap;
  if (pVVar1 == (Vector2__Array *)0x0) {
    func_?(0);
  }
  else if ((uint)MaterialID < pVVar1->max_length) {
    VVar2.y = pVVar1->vector[MaterialID].y;
    VVar2.x = pVVar1->vector[MaterialID].x;
    return VVar2;
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  VVar2 = (Vector2)(*pcVar4)();
  return VVar2;
}


/* Void InitializeIndexMap() */

void Assembly-CSharp.dll::TextureAtlas::TextureAtlas_InitializeIndexMap(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = 0;
  do {
    if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
      func_?(TypeInfo__TextureAtlas);
    }
    iVar1 = mscorlib.dll::System::Array::Array_IndexOf_7
                      (TypeInfo__TextureAtlas->static_fields->GlowingMaterials,value,
                       int_MethodInfo__System__Array__IndexOf<int>_System__Int32_____int_);
    if (iVar1 < 0) {
      if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
        func_?(TypeInfo__TextureAtlas);
      }
      if (TypeInfo__TextureAtlas->static_fields->GlowingMaterials == (Int32__Array *)0x0)
      goto code_?;
      iVar2 = func_?(0);
      uVar3 = value;
      if (iVar2 <= (int)value) {
        if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
          func_?(TypeInfo__TextureAtlas);
        }
        pIVar4 = TypeInfo__TextureAtlas->static_fields->GlowingMaterials;
        if (pIVar4 == (Int32__Array *)0x0) goto code_?;
        iVar2 = func_?(pIVar4->max_length - 1);
        if (iVar2 < (int)value) {
          if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
            func_?(TypeInfo__TextureAtlas);
          }
          pIVar4 = TypeInfo__TextureAtlas->static_fields->GlowingMaterials;
          if (pIVar4 == (Int32__Array *)0x0) goto code_?;
          uVar3 = value - pIVar4->max_length;
        }
        else {
          iVar5 = 0;
          iVar2 = 0;
          while( true ) {
            if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
              func_?(TypeInfo__TextureAtlas);
            }
            pIVar4 = TypeInfo__TextureAtlas->static_fields->GlowingMaterials;
            if (pIVar4 == (Int32__Array *)0x0) goto code_?;
            if ((int)(pIVar4->max_length - 1) <= iVar2) break;
            if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
              func_?(TypeInfo__TextureAtlas);
            }
            if (TypeInfo__TextureAtlas->static_fields->GlowingMaterials == (Int32__Array *)0x0)
            goto code_?;
            iVar6 = func_?(iVar2);
            if ((int)value < iVar6) break;
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + 1;
          }
          uVar3 = value - iVar5;
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
        func_?(TypeInfo__TextureAtlas);
      }
      pIVar4 = TypeInfo__TextureAtlas->static_fields->GlowingMaterials;
      if (pIVar4 == (Int32__Array *)0x0) goto code_?;
      uVar3 = (iVar1 - pIVar4->max_length) + 0x45;
    }
    uVar7 = uVar3 & 0x8000000f;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
    }
    iStack_8 = 0xf - ((int)((uVar3 - uVar7) + ((int)(uVar3 - uVar7) >> 0x1f & 0xfU)) >> 4);
    if ((((uint)(TypeInfo__TextureAtlas->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__TextureAtlas->_1).cctor_started == 0)) {
      func_?(TypeInfo__TextureAtlas);
    }
    if (TypeInfo__TextureAtlas->static_fields->IndexMap == (Vector2__Array *)0x0) {
code_?:
      func_?(0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_10 = 0;
    func_?(&uStack_10,(float)(int)uVar7 * _UNK_? + _UNK_?,
                    (float)iStack_8 * _UNK_? + _UNK_?);
    puVar11 = (undefined4 *)func_?(value);
    value = value + 1;
    *puVar11 = (undefined4)uStack_10;
    puVar11[1] = uStack_10._4_4_;
    if (0x44 < (int)value) {
      return;
    }
  } while( true );
}


/* TextureAtlas() */

void Assembly-CSharp.dll::TextureAtlas::TextureAtlas__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  array = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,__field_D7A8399668C6A27F435CABD199B3FB2E1B012423_Field,(MethodInfo *)0x0
            );
  TypeInfo__TextureAtlas->static_fields->GlowingMaterials = array;
  pVVar1 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,0x100);
  TypeInfo__TextureAtlas->static_fields->IndexMap = pVVar1;
  TypeInfo__TextureAtlas->static_fields->Initialized = 0;
  return;
}

