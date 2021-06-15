
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AnimatedSpriteSheetTexture+<UpdateTiling>c__Iterator0::
     AnimatedSpriteSheetTexture_UpdateTiling_c_Iterator0_MoveNext
               (AnimatedSpriteSheetTexture_UpdateTiling_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    (this->fields)._x___0 = 0.0;
    (this->fields)._y___0 = 0.0;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    VVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_get_zero((MethodInfo *)0x0);
    pAVar3 = (this->fields)._this;
    (this->fields)._offset___0.x = fStack_4;
    fStack_5 = VVar2.y;
    (this->fields)._offset___0.y = fStack_5;
    goto code_?;
  }
  if (iVar1 != 1) {
    return 0;
  }
  piVar6 = &(this->fields)._j___2;
  *piVar6 = *piVar6 + 1;
  pAVar3 = (this->fields)._this;
  iVar1 = (this->fields)._j___2;
  pAVar7 = pAVar3;
  do {
    if (pAVar3 == (AnimatedSpriteSheetTexture *)0x0) {
code_?:
      func_?(0);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    iVar10 = (pAVar3->fields).Columns;
    if (iVar1 <= iVar10 + -1) {
      if (pAVar7 == (AnimatedSpriteSheetTexture *)0x0) goto code_?;
      iVar11 = (this->fields)._i___1;
      iVar12 = (pAVar7->fields).emptyRows;
      pAVar3 = pAVar7;
      if (iVar12 <= iVar11) {
        if (pAVar7 == (AnimatedSpriteSheetTexture *)0x0) goto code_?;
        if ((iVar12 < iVar11) || (iVar1 < iVar10 - (pAVar7->fields).emptyColumnsOnLastRow)) {
          pVVar13 = &(this->fields)._offset___0;
          (this->fields)._x___0 = (float)iVar1 / (float)iVar10;
          fVar14 = (pAVar7->fields).cellWidthMultiplier * ((float)iVar1 / (float)iVar10);
          (this->fields)._x___0 = fVar14;
          func_?(pVVar13,fVar14,(this->fields)._y___0,0);
          pAVar3 = (this->fields)._this;
          if ((pAVar3 != (AnimatedSpriteSheetTexture *)0x0) &&
             (this_00 = (pAVar3->fields).textureRenderer, this_00 != (Renderer *)0x0)) {
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                (this_00,(MethodInfo *)0x0);
            if (this_01 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
                        (this_01,StringLiteral__MainTex,*pVVar13,(MethodInfo *)0x0);
              pAVar3 = (this->fields)._this;
              if (pAVar3 != (AnimatedSpriteSheetTexture *)0x0) {
                fVar14 = (pAVar3->fields).FramesPerSecond;
                this_02 = (WaitForSeconds *)func_?(TypeInfo__UnityEngine__WaitForSeconds);
                UnityEngine.CoreModule.dll::UnityEngine::WaitForSeconds::WaitForSeconds__ctor
                          (this_02,_UNK_? / fVar14,(MethodInfo *)0x0);
                (this->fields)._current = (Object *)this_02;
                if ((this->fields)._disposing == 0) {
                  (this->fields)._PC = 1;
                }
                return 1;
              }
            }
          }
          goto code_?;
        }
      }
    }
    piVar6 = &(this->fields)._i___1;
    *piVar6 = *piVar6 + -1;
    iVar10 = (this->fields)._i___1;
    while (iVar10 < 0) {
      if (pAVar3 == (AnimatedSpriteSheetTexture *)0x0) goto code_?;
      if ((pAVar3->fields).RunOnce != 0) {
        return 0;
      }
code_?:
      if (pAVar3 == (AnimatedSpriteSheetTexture *)0x0) goto code_?;
      iVar10 = (pAVar3->fields).Rows + -1;
      (this->fields)._i___1 = iVar10;
    }
    if (pAVar3 == (AnimatedSpriteSheetTexture *)0x0) goto code_?;
    pAVar7 = (this->fields)._this;
    iVar1 = 0;
    fVar14 = (float)iVar10 / (float)(pAVar3->fields).Rows;
    (this->fields)._y___0 = fVar14;
    fVar14 = (pAVar3->fields).cellHeightMultiplier * fVar14;
    (this->fields)._y___0 = fVar14;
    fVar15 = (float)(pAVar3->fields).spriteHeight;
    iVar10 = (pAVar3->fields).spriteUnusedPixelHeight;
    (this->fields)._j___2 = 0;
    (this->fields)._y___0 = ((float)iVar10 + fVar15 * fVar14) / fVar15;
  } while( true );
}


/* Void Reset() */

void Assembly-CSharp.dll::AnimatedSpriteSheetTexture+<UpdateTiling>c__Iterator0::
     AnimatedSpriteSheetTexture_UpdateTiling_c_Iterator0_Reset
               (AnimatedSpriteSheetTexture_UpdateTiling_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

