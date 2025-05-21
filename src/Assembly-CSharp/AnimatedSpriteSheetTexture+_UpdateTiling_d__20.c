
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AnimatedSpriteSheetTexture+<UpdateTiling>d__20::
     AnimatedSpriteSheetTexture_UpdateTiling_d_20_MoveNext
               (AnimatedSpriteSheetTexture_UpdateTiling_d_20 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    func_?(&StringLiteral__MainTex);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pAVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._y_5__2 = 0.0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector2);
      cRam_? = '\x01';
    }
    fVar3 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    (this->fields)._offset_5__3.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
    (this->fields)._offset_5__3.y = fVar3;
    do {
      if (pAVar2 == (AnimatedSpriteSheetTexture *)0x0) goto code_?;
      iVar1 = (pAVar2->fields).Rows;
      while ((this->fields)._i_5__4 = iVar1 + -1, -1 < iVar1 + -1) {
        if (pAVar2 == (AnimatedSpriteSheetTexture *)0x0) goto code_?;
        fVar3 = (float)(this->fields)._i_5__4 / (float)(pAVar2->fields).Rows;
        (this->fields)._y_5__2 = fVar3;
        fVar3 = fVar3 * (pAVar2->fields).cellHeightMultiplier;
        (this->fields)._y_5__2 = fVar3;
        iVar1 = (pAVar2->fields).spriteHeight;
        iVar4 = (pAVar2->fields).spriteUnusedPixelHeight;
        iVar5 = (pAVar2->fields).spriteHeight;
        (this->fields)._j_5__5 = 0;
        (this->fields)._y_5__2 = ((float)iVar1 * fVar3 + (float)iVar4) / (float)iVar5;
code_?:
        if ((this->fields)._j_5__5 <= (pAVar2->fields).Columns + -1) {
          iVar4 = (this->fields)._i_5__4;
          iVar1 = (pAVar2->fields).emptyRows;
          if ((iVar1 <= iVar4) &&
             ((iVar1 < iVar4 ||
              ((this->fields)._j_5__5 <
               (pAVar2->fields).Columns - (pAVar2->fields).emptyColumnsOnLastRow)))) {
            iVar1 = (this->fields)._j_5__5;
            iVar4 = (pAVar2->fields).Columns;
            fVar3 = (pAVar2->fields).cellWidthMultiplier;
            (this->fields)._offset_5__3.y = (this->fields)._y_5__2;
            (this->fields)._offset_5__3.x = ((float)iVar1 / (float)iVar4) * fVar3;
            this_00 = (pAVar2->fields).textureRenderer;
            if (this_00 != (Renderer *)0x0) {
              this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  (this_00,(MethodInfo *)0x0);
              if (this_01 != (Material *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
                          (this_01,StringLiteral__MainTex,(this->fields)._offset_5__3,
                           (MethodInfo *)0x0);
                fVar3 = (pAVar2->fields).FramesPerSecond;
                this_02 = (SubscribableVariable_1_System_Single_ *)
                          func_?(TypeInfo__UnityEngine__WaitForSeconds);
                SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                          (this_02,_UNK_? / fVar3,(MethodInfo *)0x0);
                (this->fields).__2__current = (Object *)this_02;
                func_?();
                (this->fields).__1__state = 1;
                return 1;
              }
            }
            goto code_?;
          }
        }
        iVar1 = (this->fields)._i_5__4;
      }
      if (pAVar2 == (AnimatedSpriteSheetTexture *)0x0) goto code_?;
    } while ((pAVar2->fields).RunOnce == 0);
  }
  else if (iVar1 == 1) {
    piVar6 = &(this->fields)._j_5__5;
    *piVar6 = *piVar6 + 1;
    (this->fields).__1__state = -1;
    if (pAVar2 != (AnimatedSpriteSheetTexture *)0x0) goto code_?;
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    bVar8 = (*pcVar7)();
    return bVar8;
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AnimatedSpriteSheetTexture+<UpdateTiling>d__20::
     AnimatedSpriteSheetTexture_UpdateTiling_d_20_System_Collections_IEnumerator_Reset
               (AnimatedSpriteSheetTexture_UpdateTiling_d_20 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__AnimatedSpriteSheetTexture___UpdateTiling_d__20__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

