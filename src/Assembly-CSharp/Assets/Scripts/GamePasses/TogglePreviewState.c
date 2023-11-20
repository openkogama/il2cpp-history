
/* TogglePreviewState(GamePassTier, GamePassTier, Boolean) */

void Assembly-CSharp.dll::Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState__ctor
               (TogglePreviewState *this,GamePassTier__Enum previewTier,
               GamePassTier__Enum currentTier,bool freeFirstTry,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).freeTry = freeFirstTry;
  (this->fields).previewTier = (undefined1)previewTier;
  (this->fields).currentTier = (undefined1)currentTier;
  return;
}


/* Boolean get_CanToggle() */

bool Assembly-CSharp.dll::Assets::Scripts::GamePasses::TogglePreviewState::
     TogglePreviewState_get_CanToggle(TogglePreviewState *this,MethodInfo *method)

{
  if ((this->fields).previewTier == 0) {
    return (this->fields).currentTier != 3;
  }
  return 1;
}


/* Boolean get_IsOn() */

bool Assembly-CSharp.dll::Assets::Scripts::GamePasses::TogglePreviewState::
     TogglePreviewState_get_IsOn(TogglePreviewState *this,MethodInfo *method)

{
  return (this->fields).previewTier != 0;
}

