
/* IAsyncResult BeginInvoke(UndoRedoOpType, YesNoAnswer, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::RTG::CanUndoRedoHandler::CanUndoRedoHandler_BeginInvoke
          (CanUndoRedoHandler *this,UndoRedoOpType__Enum undoRedoOpType,YesNoAnswer *answer,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__UndoRedoOpType);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = func_?(TypeInfo__RTG__UndoRedoOpType,&undoRedoOpType);
  pYStack_3 = answer;
  pIVar4 = (IAsyncResult *)func_?(this,&uStack_2,callback,object);
  return pIVar4;
}

