function Initialize()
	dofile(SKIN:GetVariable('@')..'Scripts\\AppLauncher_Common_Script.lua')

	sideGap = 30
	topGap = 85

	appXGap = 105
	appYGap = 115

	appColumn = 4
	appRow = 2

	dotZoneMaxWidth = SKIN:GetVariable('Width') - sideGap * 8

	GetEssentialVariables()
end

function Update()
	return UpdateNow()
end

--[[
DrawPageIndicator
Desc: Drawing shapes that indicate current page and total number of pages
Para:
	shapeIndex: currently drawing shape index
	posX: position X of currently drawing shape
	isCurrentPage (boolean): is currently drawing shape belong to current page
]]
function DrawPageIndicator(shapeIndex, posX, isCurrentPage)
	if isCurrentPage then
		SKIN:Bang('!SetOption', 'PageShape', 'Shape'..shapeIndex, 'Rectangle '..posX..',0,5,5 | Extend Selected | Offset -2.5,-2.5')
	else
		SKIN:Bang('!SetOption', 'PageShape', 'Shape'..shapeIndex, 'Rectangle '..posX..',0,4,4 | Extend Normal | Offset -2,-2')
	end
end

function DrawSelectingShape(X, Y)
	SKIN:Bang('!SetOption', 'METER_BACKGROUND', 'Shape2', 'Rectangle ' .. X .. ',' .. Y .. ',100,100 | Extend Selecting')
end

function ClearSelectingShape()
	SKIN:Bang('!SetOption', 'METER_BACKGROUND', 'Shape2', 'Rectangle 0,0,0,0 | StrokeWidth 0')
end