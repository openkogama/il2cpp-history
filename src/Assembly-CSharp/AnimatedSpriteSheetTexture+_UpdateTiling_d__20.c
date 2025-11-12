
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AnimatedSpriteSheetTexture+<UpdateTiling>d__20::
     AnimatedSpriteSheetTexture_UpdateTiling_d_20_MoveNext
               (AnimatedSpriteSheetTexture_UpdateTiling_d_20 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__MainTex);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pAVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    bVar3 = cRam_? == '\0';
    (this->fields).__1__state = -1;
    (this->fields)._y_5__2 = 0.0;
    if (bVar3) {
      FUN_?(&TypeInfo__UnityEngine__Vector2);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar4 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
    (this->fields)._offset_5__3.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
    (this->fields)._offset_5__3.y = fVar4;
    do {
      if (pAVar2 == (AnimatedSpriteSheetTexture *)0x0) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      (this->fields)._i_5__4 = (pAVar2->fields).Rows + -1;
      while (-1 < (this->fields)._i_5__4) {
        fVar4 = (float)(this->fields)._i_5__4 / (float)(pAVar2->fields).Rows;
        (this->fields)._y_5__2 = fVar4;
        fVar4 = fVar4 * (pAVar2->fields).cellHeightMultiplier;
        (this->fields)._y_5__2 = fVar4;
        iVar1 = (pAVar2->fields).spriteHeight;
        iVar7 = (pAVar2->fields).spriteUnusedPixelHeight;
        iVar8 = (pAVar2->fields).spriteHeight;
        (this->fields)._j_5__5 = 0;
        (this->fields)._y_5__2 = ((float)iVar1 * fVar4 + (float)iVar7) / (float)iVar8;
code_?:
        if (pAVar2 == (AnimatedSpriteSheetTexture *)0x0) goto code_?;
        if ((this->fields)._j_5__5 <= (pAVar2->fields).Columns + -1) {
          iVar1 = (pAVar2->fields).emptyRows;
          iVar7 = (this->fields)._i_5__4;
          if ((iVar1 <= iVar7) &&
             ((iVar1 < iVar7 ||
              ((this->fields)._j_5__5 <
               (pAVar2->fields).Columns - (pAVar2->fields).emptyColumnsOnLastRow)))) {
            iVar1 = (this->fields)._j_5__5;
            iVar7 = (pAVar2->fields).Columns;
            fVar4 = (pAVar2->fields).cellWidthMultiplier;
            (this->fields)._offset_5__3.y = (this->fields)._y_5__2;
            (this->fields)._offset_5__3.x = ((float)iVar1 / (float)iVar7) * fVar4;
            this_00 = (pAVar2->fields).textureRenderer;
            if (this_00 != (Renderer *)0x0) {
              this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  (this_00,(MethodInfo *)0x0);
              offset = (this->fields)._offset_5__3;
              if (this_01 != (Material *)0x0) {
                name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                 (StringLiteral__MainTex,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffsetImpl
                          (this_01,name,offset,(MethodInfo *)0x0);
                fVar4 = (pAVar2->fields).FramesPerSecond;
                pOVar9 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
                *(float *)&pOVar9[1].klass = _UNK_? / fVar4;
                (this->fields).__2__current = pOVar9;
                func_?(&(this->fields).__2__current);
                (this->fields).__1__state = 1;
                return 1;
              }
            }
            goto code_?;
          }
        }
        piVar10 = &(this->fields)._i_5__4;
        *piVar10 = *piVar10 + -1;
      }
    } while ((pAVar2->fields).RunOnce == 0);
  }
  else if (iVar1 == 1) {
    piVar10 = &(this->fields)._j_5__5;
    *piVar10 = *piVar10 + 1;
    (this->fields).__1__state = -1;
    goto code_?;
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
  uVar1 = func_?(&
                              MethodInfo__AnimatedSpriteSheetTexture___UpdateTiling_d__20__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

